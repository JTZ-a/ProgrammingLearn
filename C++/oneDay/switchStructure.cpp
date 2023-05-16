/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: switchStructure.cpp
* 功能介绍: 介绍 switch 语句
*/
#include "iostream"

using namespace std;

int main(){
    int score = 0;
    cout << "请给电影打分" << endl;
    cin >> score;

    switch (score)
    {
        case 10:
        case 9:
            cout << "经典" << endl;
            break;
        case 8:
            cout << "非常好" << endl;
            break;
        case 7:
        case 6:
            cout << "一般" << endl;
            break;
        default:
            cout << "烂片" << endl;
            break;
    }
}