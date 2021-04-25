#pragma once
#ifndef _SWAP_H_
#define _SWAP_H_
/* 
简介：交换两个变量类
作者：junlin.lai
更改：|日期|内容|作者|
.................................
|20210425|新建文件|junlin.lai|



 */

#include "AllHead.h"

class Swap
{
private:
    /* data */
    int _a;
    int _b;

public:
    Swap(/* args */);
    Swap(int a, int b);
    ~Swap();

    void run();
    void printInfo();
};

#endif