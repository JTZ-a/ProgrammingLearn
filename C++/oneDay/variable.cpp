/**
* 作者: JTZ
* 时间: 2023/5/15
* 文件名称: variable.cpp
* 功能介绍: 介绍关于 C++ 中变量的使用
*/
# include "iostream"
# include "string"  // 在 C++ 中使用字符串需要加入此头文件
using namespace std;

int main(){
    cout << " 输出整型 " << endl;
    int I = 10;
    cout << " 整型变量 a = " << I << endl;

    cout << " 输出浮点型 " << endl;
    float F = 10.0f;
    double  D = 3.14;
    cout << " 浮点型变量 F = " << F << endl;
    cout << " 浮点型变量 D = " << D << endl;


    cout << " 输出字符型 " << endl;
    char C = 'a';
    cout << " 字符型变量 C = " << C << endl;


    cout << " 输出字符串型 " << endl;
    string str = "hello world";
    char str1[] = "hello world";
    cout << " 字符串型变量 str = " << str << endl;
    cout << " 字符串型变量 str1[] = " << str1 << endl;


    cout << " 输出布尔型 " << endl;
    bool flag = true;
    cout << " 布尔型变量 flag = " << flag << endl;
}