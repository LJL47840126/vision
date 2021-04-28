#include "swap.h"

Swap::Swap(/* args */)
{
}

Swap::~Swap()
{
}

Swap::Swap(int a, int b)
{
    this->_a = a;
    this->_b = b;
}

void Swap::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void Swap::printInfo()
{
    cout << "a = " << _a << endl;
    cout << "b = " << _b << endl;
}