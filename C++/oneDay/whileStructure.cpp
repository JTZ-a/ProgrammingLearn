/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: whileStructure.cpp
* 功能介绍: 
*/
# include "iostream"
#include <cstdlib>
using namespace std;

int main() {
    int NUM = 0;
    int num = 0;

    NUM = rand();
    cout << NUM << endl;
    while (true){
        cout << "请输入一个数字 1-100: " << ends;
        cin >> num;
        if (num == NUM){
            cout << "猜对了" << endl;
            break;
        } else {
            cout << "猜错了" << endl;
        }
    }
}