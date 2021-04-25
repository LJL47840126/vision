/* 
简介：主函数
作者：junlin.lai
更改：|日期|内容|作者|
.................................
|20210425|新建主函数|junlin.lai|



 */

/* 
包含头文件多文件编译命令：-O2默认优化方式
g++ main.cpp src/swap.cpp -Ihdir -O2 -o main
*/

#include "AllHead.h"
#include "swap.h"

int main(int argc, char **argv)
{

	cout << "hello world" << endl;
	Swap swapTemp(1, 2);

	cout << "before swap" << endl;
	swapTemp.printInfo();

	swapTemp.run();

	cout << "after swap" << endl;
		swapTemp.printInfo();

	return 0;
}
