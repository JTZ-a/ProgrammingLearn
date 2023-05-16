/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: forStructure.cpp
* 功能介绍: 
*/
# include "iostream"

using namespace std;

int main(){
    for (int i = 1; i < 10 ; i++){
        for (int j = 1; j <= i; j++){
            cout << i << " * " << j << " = " << i * j << " \t " << ends;
        }
       cout << endl;
    }
}