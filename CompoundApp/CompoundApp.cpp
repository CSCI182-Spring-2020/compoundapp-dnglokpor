// CompoundApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Compound.h"

using namespace std;

int main()
{
    // Create Butane
    Compound* c = new Compound(2);
    c->addElement("Carbon", "C", 6, 4);
    c->addElement("Hydrogen", "H", 1, 10);
    c->printCompound();
    
    delete c;
}
