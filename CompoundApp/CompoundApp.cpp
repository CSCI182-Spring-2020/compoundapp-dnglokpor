/*
CSCI 182 - Assignment due 3/6
Compound App.cpp
Comppound class with copy and assignment constructors
The later are not working properly

Delwys Glokpor
v1.0 3/6/2020
*/
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
