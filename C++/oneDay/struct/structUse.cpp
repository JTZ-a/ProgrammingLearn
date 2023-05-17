/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: structUse.cpp
* 功能介绍: 结构体的定义和使用
*/
#include "iostream"

using namespace std;

// 结构体定义
struct student{
    string name;
    int age;
    int score;
}stu3; // 第三种创建方式

int main(){
    // 第一种结构体创建方式
    student stu1;

    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;

    // 第二种结构体创建方式
    student stu2 = {"李四", 20, 90};


    stu3.name = "王五";
    stu3.age = 22;
    stu3.score = 80;
}