/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: dowhileStructure.cpp
* 功能介绍: 介绍 do..while 循环结构
*/
#include <valarray>
#include "iostream"

using namespace std;

int main(){
    cout << " 获取三位数内的所有的水仙花数 " << endl;
    int num = 100;
    do {
        if ((pow(num%10, 3) + pow((num%100 - num%10)/10, 3) + pow((num - (num % 100))/100, 3)) == num){
            cout <<  num << endl;
        }
        num ++;
    } while (num < 1000);
}