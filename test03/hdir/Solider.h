#pragma once
#ifndef _SOLIDER_H_
#define _SOLIDER_H_
/* 
简介：士兵类
作者：junlin.lai
更改：|日期|内容|作者|
.................................
|20210429|士兵类|junlin.lai|



 */

#include "AllHead.h"
#include "Gun.h"

class Solider
{
private:
    /* data */
    string soliderNAme;
    Gun * mp_gun;
public:
    Solider(string name);
    void addBulletToGun(int num);
    void addGUn(Gun *pGun);
    bool shoot();

    Solider(/* args */);
    ~Solider();
};

#endif