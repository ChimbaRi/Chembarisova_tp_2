#include "Train.h"
Train::Train() :Name_of_Destination(""), Train_Number(""), Departure_Time(""), Next(nullptr) { cout << "Создан объект класса Train" << endl; }
Train::Train(string N, string T, string D) :Name_of_Destination(N), Train_Number(T), Departure_Time(D), Next(nullptr) { cout << "Создан объект класса Train" << endl; }
Train::Train(Train& T1):Name_of_Destination(T1.Name_of_Destination), Train_Number(T1.Train_Number), Departure_Time(T1.Departure_Time), Next(T1.Next) { cout << "Создан объект класса Train" << endl; }
Train::~Train(){}

void Train::SetNameOfDestination(const string& N) { this->Name_of_Destination = N; }
void Train::SetTrainNumber(const string& T) { this->Train_Number = T; }
void Train::SetDepartureTime(const string& D) { this->Departure_Time = D; }
void Train::SetNext(Train* N){this->Next = N;}

string Train::GetNameOfDestination() const { return Name_of_Destination; }
string Train::GetTrainNumber() const { return Train_Number; }
string Train::GetDepartureTime() const { return Departure_Time; }
Train* Train::GetNext() const { return Next; }

istream& operator >>(istream& is, Train& T1) {
	is.clear();
	is.ignore();
	cout << "Введите название пункта назначения: ";
	getline(is, T1.Name_of_Destination);
	cout << "Введите номер поезда: ";
	is.clear();
	getline(is, T1.Train_Number);
	cout << "Введите время отправления: ";
	is.clear();
	getline(is, T1.Departure_Time);
	is.sync();
	return is;
}

ostream& operator <<(ostream& os, const Train& T1) {
	os << "Название пункта назначения: " << T1.Name_of_Destination << endl;
	os << "Номер поезда: " << T1.Train_Number << endl;
	os << "Время отправления: " << T1.Departure_Time << endl;
	return os;
}