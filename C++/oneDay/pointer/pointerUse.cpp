/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: pointerUse.cpp
* 功能介绍: 指针变量的定义和使用
*/
#include "iostream"

using namespace std;

int main(){
    int a = 10;

    // 1. 定义一个指针: 数据类型 * 变量名
    int * p;

    // 2. 指针变量赋值, 使用 &a 表示返回的是 a 的内存地址
    p = &a;

    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;

    // 3. 指针的使用, 使用 * 来获取对应内存的值
    cout << "*p = " << sizeof(p) << endl;
}