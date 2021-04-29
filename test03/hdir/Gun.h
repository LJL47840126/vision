#pragma once
#ifndef _GUN_H_
#define _GUN_H_
/* 
简介：抢的类
作者：junlin.lai
更改：|日期|内容|作者|
.................................
|20210429|新建文件|junlin.lai|



 */

#include "AllHead.h"

class Gun
{
private:
    /* data */
    string gunName;
    int bulletNum;

public:
    Gun(string gunName);
    void checkBullet();
    void addBullet(int bulletNUm);
    bool shoot();

    Gun(/* args */);
    ~Gun();
};

#endif