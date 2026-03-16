#pragma once

#include <iostream>
using namespace std;

class NumberArray

{
private:
	int size;
	double* data;

	static const int MAX_SIZE = 100;

public:
	NumberArray(int size = MAX_SIZE);
	~NumberArray();
	void setNumber(int index, double value);
	double getNumber(int index) const;
	double getMin() const;
	double getMax() const;
	double getAvg() const;
	void print() const;
	int getSize() const { return size; }
};

