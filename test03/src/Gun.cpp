#include "Gun.h"

Gun::Gun(string gunName)
{
    this->bulletNum = 0;
    this->gunName = gunName;
}

void Gun::addBullet(int num)
{
    this->bulletNum += num;
    cout << "now bullerNUm is :" << this->bulletNum << endl;
}

bool Gun::shoot()
{
    if (this->bulletNum <= 0)
    {
        cout << "bulletnum is less" << endl;
        return false;
    }
    else
    {
        this->bulletNum -= 1;
        cout << "shoot once" << endl;
        return true;
    }
}

Gun::Gun(/* args */)
{
}

Gun::~Gun()
{
}