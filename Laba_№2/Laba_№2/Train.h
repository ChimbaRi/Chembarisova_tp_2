#pragma once
#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>
using namespace std;

class Train
{
private:
	string Name_of_Destination;
	string Train_Number;
	string Departure_Time;
	Train* Next;
public:
	Train();
	Train(string N, string T, string D);
	Train(Train& T1);
	~Train();

	void SetNameOfDestination(const string& N);
	void SetTrainNumber(const string& T);
	void SetDepartureTime(const string& D);
	void SetNext(Train* N);

	string GetNameOfDestination() const;
	string GetTrainNumber() const;
	string GetDepartureTime() const;
	Train* GetNext() const;

	friend istream& operator >>(istream& is, Train& T1);
	friend ostream& operator <<(ostream& os, const Train& T1);

};

