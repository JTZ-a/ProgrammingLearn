/**
* ����: JTZ
* ʱ��: 2023/5/16
* �ļ�����: switchStructure.cpp
* ���ܽ���: ���� switch ���
*/
#include "iostream"

using namespace std;

int main(){
    int score = 0;
    cout << "�����Ӱ���" << endl;
    cin >> score;

    switch (score)
    {
        case 10:
        case 9:
            cout << "����" << endl;
            break;
        case 8:
            cout << "�ǳ���" << endl;
            break;
        case 7:
        case 6:
            cout << "һ��" << endl;
            break;
        default:
            cout << "��Ƭ" << endl;
            break;
    }
}