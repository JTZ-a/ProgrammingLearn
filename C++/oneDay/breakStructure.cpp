/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: breakStructure.cpp
* 功能介绍: 介绍 break 语句
*/
#include "iostream"

using namespace std;

int main(){
    int difficulty = 0;
    cout << " 请选择你的难度: " << endl;
    cin >> difficulty;
    switch (difficulty) {
        case 1:
            cout << " 普通难度 " << endl;
            break;
        case 2:
            cout << " 中等难度 " << endl;
            break;
        case 3:
            cout << " 困难难度 " << endl;
            break;
    }
}
