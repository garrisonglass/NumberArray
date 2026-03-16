#include "NumberArray.h"

// Constructor
NumberArray::NumberArray(int size)
{
	if (size <= 0) 
		this->size = MAX_SIZE;
	else 
		this->size = size;
	
	data = new double[this->size]();

	for (int i = 0; i < this->size; i++)
		data[i] = 0.0;
}

// Destructor
NumberArray::~NumberArray()
{
	delete[] data;
}
//Mutator: setNumber
void NumberArray::setNumber(int index, double value)
{
	if (index >= 0 && index < size)
		data[index] = value;
}
//Accessor: getNumber
double NumberArray::getNumber(int index) const
{
	static const double D_FAULT = 0.0;

	if (index >= 0 && index < size)
		return data[index];
	else
		return D_FAULT;
}
//getMin
double NumberArray::getMin() const
{
	double min = data[0];

	for (int i = 1; i < size; i++)
	{
		if (data[i] < min)
			min = data[i];
	}
	return min;
}

