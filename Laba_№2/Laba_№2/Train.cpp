#include "Train.h"
Train::Train():Name_of_Destination(nullptr), Train_Number(nullptr), Departure_Time(nullptr) { cout << "������ ������ ������ Train" << endl; }
Train::Train(string N, string T, string D) :Name_of_Destination(N), Train_Number(T), Departure_Time(D) { cout << "������ ������ ������ Train" << endl; }
Train::Train(const Train& T1) :Name_of_Destination(T1.Name_of_Destination), Train_Number(T1.Train_Number), Departure_Time(T1.Departure_Time) { cout << "������ ������ ������ Train" << endl; }
Train::~Train(){ cout << "������ ������ ������ Train" << endl; }

void Train::SetNameOfDestination(const string& N) { this->Name_of_Destination = N; }
void Train::SetTrainNumber(const string& T) { this->Train_Number = T; }
void Train::SetDepartureTime(const string& D) { this->Departure_Time = D; }

string Train::GetNameOfDestination() const { return Name_of_Destination; }
string Train::GetTrainNumber() const { return Train_Number; }
string Train::GetDepartureTime() const { return Departure_Time; }

istream& operator >>(istream& is, Train T1) {
	cout << "������� �������� ������ ����������: ";
	is >> T1.Name_of_Destination;
	cout << "������� ����� ������: ";
	is >> T1.Train_Number;
	cout << "������� ����� �����������: ";
	is >> T1.Departure_Time;
	return is;
}

ostream& operator <<(ostream& os, const Train T1) {
	os << "�������� ������ ����������: " << T1.Name_of_Destination << endl;
	os << "����� ������: " << T1.Train_Number << endl;
	os << "����� �����������: " << T1.Departure_Time << endl;
	return os;
}