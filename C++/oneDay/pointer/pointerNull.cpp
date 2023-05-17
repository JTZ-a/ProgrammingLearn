/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: pointerNull.cpp
* 功能介绍: 介绍空指针和野指针
*/
#include "iostream"

using namespace std;

int main(){
    int * p = NULL; // 这是一个空指针
    //访问空指针报错
    //内存编号0 ~255为系统占用内存，不允许用户访问
    cout << *p << endl;

    int * q = (int *)0x1100;
    //访问野指针报错
    cout << *p << endl;
}