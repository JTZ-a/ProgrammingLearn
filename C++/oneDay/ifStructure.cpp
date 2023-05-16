/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: ifStructure.cpp
* 功能介绍: if 循环的使用
*/
#include "iostream"

using namespace std;
int main() {
    int score = 0;
    cout << "请输入考试分数: " << endl;
    cin >> score;
    if (score > 600){
        cout << " 恭喜你考上了一本大学 " << endl;
    } else if (score > 500) {
        cout << " 恭喜你考上了二本大学 " << endl;
    } else if (score > 400) {
        cout << " 恭喜你考上了三本大学 " << endl;
    } else {
        cout << " 我没有考上本科 " << endl;
    }
}
