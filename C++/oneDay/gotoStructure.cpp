/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: gotoStructure.cpp
* 功能介绍: 介绍 goto 语句
*/
#include "iostream"

using namespace std;

int main(){
    cout << "1" << endl;
    goto FLAG;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;

    FLAG:

    cout << "5" << endl;
}
