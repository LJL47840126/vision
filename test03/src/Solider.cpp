#include "Solider.h"

Solider::Solider(string name)
{
    this->soliderNAme = name;
    this->mp_gun = nullptr; //定义未空指针
}

void Solider::addGUn(Gun *pGun)
{
    this->mp_gun = pGun;
}

void Solider::addBulletToGun(int num)
{
    this->mp_gun->addBullet(num);
}

bool Solider::shoot()
{
    this->mp_gun->shoot();
    return true;
}

Solider::Solider(/* args */)
{
}

Solider::~Solider()
{
    if (this->mp_gun == nullptr)
    {
        return;
    }
    else
    {
        delete this->mp_gun;
        this->mp_gun = nullptr;
        return;
    }
}