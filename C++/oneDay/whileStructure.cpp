/**
* ����: JTZ
* ʱ��: 2023/5/16
* �ļ�����: whileStructure.cpp
* ���ܽ���: 
*/
# include "iostream"
#include <cstdlib>
using namespace std;

int main() {
    int NUM = 0;
    int num = 0;

    NUM = rand();
    cout << NUM << endl;
    while (true){
        cout << "������һ������ 1-100: " << ends;
        cin >> num;
        if (num == NUM){
            cout << "�¶���" << endl;
            break;
        } else {
            cout << "�´���" << endl;
        }
    }
}