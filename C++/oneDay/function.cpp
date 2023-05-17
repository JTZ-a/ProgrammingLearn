/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: function.cpp
* 功能介绍: 
*/
#include "iostream"

using namespace std;

int add(const int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a = 10;
    int b = 10;
    int sum = add(a, b);
    cout << "sum = " << sum << endl;
}


