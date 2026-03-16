// NumberArray.cpp : This file contains the 'main' function. 

#include <iostream>
#include "NumberArray.h"
#include <random>

using namespace std;

int main()
{
	cout << "Number Array Test Program\n\n";
	//Test 1: Default Constructor
	cout << "Default Constructor Test\n";
	NumberArray a1;
	a1.print();
	//Test 2: Perameterized Constructor
	cout << "\nPerameterized Constructor Test, size 10\n";
	NumberArray a2(10);
	a2.print();
	//Test3: Random Number Test
	cout << "\nRandom Number Test\n";

	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> dis(1.0, 100.0);

	for(int i= 0; i < a2.getSize(); i++)
	{
		a2.setNumber(i, dis(gen));
	}
	a2.print();
	//test 4: Out of bounds test


}