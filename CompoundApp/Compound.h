#pragma once

#include<iostream>
#include "ElementAmount.h"

class Compound
{
private:
	ElementAmount* _compound = NULL;
	int _compoundSize;
	int _elementIndex = 0;
public:
	Compound(int nNumberElements);
	/// <summary>
	/// Destructor for Compound objects. Deallocate _compound.
	/// </summary>
	~Compound();
	/// <summary>
	/// Add a new ElementAmountObject to _compound array
	/// </summary>
	/// <param name=""></param>
	/// <param name=""></param>
	/// <param name=""></param>
	void addElement(string name, string symbol, int aNum, int aCount);
	/// <summary>
	/// Print the Compound
	/// </summary>
	void printCompound();
	/// <summary>
	/// Deep Copy construction
	/// </summary>
	/// <param name="compound"></param>
	Compound(const Compound& compound);
	/// <summary>
	/// Deep copy assignment
	/// </summary>
	/// <param name="compound"></param>
	/// <returns></returns>
	Compound& operator=(const Compound& compound);
};

