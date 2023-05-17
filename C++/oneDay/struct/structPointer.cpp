/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: structPointer.cpp
* 功能介绍: 结构体指针
*/
#include "iostream"

using namespace std;

struct student{
    string name;
    int age;
    int score;
};

int main(){
    student stu = {"张三", 18, 100};
    student * p = &stu;
    cout << "姓名: " << p->name << " 年龄: " << p->age << " 分数: " << p->score << endl;
}
