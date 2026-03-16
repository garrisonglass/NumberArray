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
	cout << "\nOut of Bounds Test\n";
	a2.setNumber(-10, 50.0);
	a2.setNumber(500, 50.0);

	cout << "GetNumber(-10): " << a2.getNumber(-10) << endl;
	cout << "GetNumber(500): " << a2.getNumber(500) << endl;

	//Test 5: Min, Max, Avg Test
	cout << "\nStatisticl Test\n";

	cout << "Min: " << a2.getMin() << endl;
	cout << "Max: " << a2.getMax() << endl;
	cout << "Avg: " << a2.getAvg() << endl;

	//End of program
	cout << "\nEnd of Program. Standby for destructor messages.\n\n";

	return 0;

}