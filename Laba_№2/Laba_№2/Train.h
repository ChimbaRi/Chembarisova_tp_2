#pragma once
#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

class Train
{
private:
	string Name_of_Destination;
	string Train_Number;
	string Departure_Time;
public:
	Train();
	Train(string N, string T, string D);
	Train(const Train& T1);
	~Train();

	void SetNameOfDestination(const string& N);
	void SetTrainNumber(const string& T);
	void SetDepartureTime(const string& D);

	string GetNameOfDestination() const;
	string GetTrainNumber() const;
	string GetDepartureTime() const;

	friend istream& operator >>(istream& is, Train T1);
	friend ostream& operator <<(ostream& os, const Train T1);

};

