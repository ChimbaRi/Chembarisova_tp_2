#include "List.h"
List::List():Length(0), HeadT(new Train), LastT(HeadT), Flag(true) { cout << "Создан объект класса List" << endl; }
List::List(Train* T) :Length(1), Flag(true) {
	cout << "Создан объект класса List" << endl; 
	LastT->SetNext(T);
	LastT = T;
}
List::List(const List& T) :Length(T.Length), HeadT(T.HeadT), LastT(T.LastT), Flag(T.Flag) { cout << "Создан объект класса List" << endl; }
List::~List() {}

void List::SetLength(int n) { this->Length = n; }
int List::GetLength() { return Length; }

void List::AddTrain() {
	Train* T1 = new Train;
	cin >> *T1;
	LastT->SetNext(T1);
	this->LastT = T1;
	SetLength(GetLength() + 1);
	SortTrain();
}

Train* List::operator[](int n) {
	if (n<0 || n>GetLength()) return nullptr;
	Train* T = HeadT;
	int i = 0;
	while (i != n) {
		T = T->GetNext();
		i++;
	}
	return T;
}

void List::SortTrain() {
	if (GetLength() == 1) {
		cout << "Сортировка невозможна! Список состоит из 1 элемента." << endl;
		return;
	}
	Train* T1 = HeadT->GetNext();
	Train* T2 = HeadT;
	int i = 1;
	while (i != GetLength()) {
		int S = strcmp(T1->GetDepartureTime().c_str(), T1->GetNext()->GetDepartureTime().c_str());
		bool SortFlag = (Flag == true) ? (S > 0) : (S < 0);
		if (SortFlag) {
			Train* ptr0 = (*this)[i - 1];
			Train* ptr1 = (*this)[i];
			Train* ptr2 = (*this)[i + 1];
			Train* ptr3 = (*this)[i + 2];
			ptr0->SetNext(ptr2);
			ptr1->SetNext(ptr3);
			ptr2->SetNext(ptr1);
			if (LastT == ptr2)
				LastT = ptr1;
			i = 1;
			T1 = HeadT -> GetNext();
			T2 = HeadT;
		}
		else
		{
			T1 = T1->GetNext();
			T2 = T2->GetNext();
			i++;
		}
	}
}

void List::DeleteTrain() {
	if (Length == 0)
		throw 0;
	cout << "Введите индекс рейса, который хотите удалить" << endl;
	int i;
	cin >> i;
	if (i < 0 || i > Length)
		throw - 1;
	Train* TP = (*this)[i - 1]; //Предыдущий элемент списка
	if (i == Length) {
		delete LastT;
		LastT = TP;
		LastT->SetNext(nullptr);
		SetLength(GetLength() - 1);
		return;
	}
	Train* TC = (&TC)[i];
	Train* TN = (&TN)[i + 1];
	delete TC;
	TP->SetNext(TN);
	SetLength(GetLength() - 1);
}

void List::EditTrain() {
	if (Length == 0)
		throw 0;
	cout << "Введите индекс рейса, который хотите отредактировать" << endl;
	int i;
	cin >> i;
	if (i < 0 || i > Length)
		throw - 1;
	Train* TC = (*this)[i]; 
	cin >> *TC;
	SortTrain();
}

void List::FindTrain() {
	if (Length == 0)
		throw 0;
	string find;
	cin >> find;
	Train* T = HeadT->GetNext();
	while (T != nullptr) {
		if (T->GetTrainNumber() == find)
			cout << T;
		T->GetNext();
	}
}

void List::Print() {
	Train* T = HeadT->GetNext();
	if (GetLength() == 0)
		cout << "Список пуст!" << endl;
	while (T != nullptr) {
		cout << *T << endl;
		T = T->GetNext();
	}
}

void List::FlipFlag()
{
	Flag = !Flag;
	if (GetLength() > 0) SortTrain();
}