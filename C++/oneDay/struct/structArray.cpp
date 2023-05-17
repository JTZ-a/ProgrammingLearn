/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: structArray.cpp
* 功能介绍: 结构体数组
*/
#include "iostream"

using namespace std;

struct student{
    string name;
    int age;
    int score;
};

int main(){
    student arr[3] = {
            {"张三", 18, 80},
            {"李四", 19, 60},
            {"王五", 20, 70 }
    };
}