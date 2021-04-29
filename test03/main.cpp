/* 
简介：主函数,cmake编译开发,多文件编译
作者：junlin.lai
更改：|日期|内容|作者|
.................................
|20210429|新建主函数|junlin.lai|



 */

#include "Gun.h"
#include "Solider.h"

void test()
{
    Solider solider("XuSanDuo");
    solider.addGUn(new Gun("AK47"));
    solider.addBulletToGun(20);
    solider.shoot();
}

int main()
{
    test();
    return 0;
}