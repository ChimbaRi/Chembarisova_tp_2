#pragma once
#include "Train.h"

class List
{
private:
	int Length;
	Train* HeadT;
	Train* LastT;
	bool Flag;
public:
	List();
	List(Train* T);
	List(const List& l);
	~List();

	void SetLength(int n);
	int GetLength();

	void AddTrain();
	Train* operator[](int n);
	void SortTrain();
	void DeleteTrain();
	void EditTrain();
	void FindTrain();
	void Print();
	void FlipFlag();
};

