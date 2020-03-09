#include "Compound.h"
#include "ElementAmount.h"

using namespace std;

Compound::Compound(int nNumberElements)
{
	_compound = new ElementAmount[nNumberElements];
	_compoundSize = nNumberElements;
}

Compound::~Compound()
{
	if (_compound != NULL)
		delete[] _compound;
}

void Compound::addElement(string name, string symbol, int aNum, int aCount)
{
	if(_elementIndex < _compoundSize){
		_compound[_elementIndex].addElementAmount(name, symbol, aNum, aCount);
		_elementIndex++;
	}
}

void Compound::printCompound()
{
	for (int i = 0; i < _compoundSize; i++)
		_compound[i].printElementAmount();
}

Compound::Compound(const Compound& compound)
{
	_compound = new ElementAmount[compound._compoundSize];
	_compoundSize = compound._compoundSize;
	// recover compound components
	_elementIndex = 0;
	while (_elementIndex < _compoundSize) {
		_compound[_elementIndex] = compound._compound[_elementIndex];
		_elementIndex++;
	}
}

Compound& Compound::operator=(const Compound& compound)
{
	_compound = new ElementAmount[compound._compoundSize];
	_compoundSize = compound._compoundSize;
	// recover compound components
	_elementIndex = 0;
	while(_elementIndex < _compoundSize) {
		_compound[_elementIndex] = compound._compound[_elementIndex];
		_elementIndex++;
	}

	return *this;
}
