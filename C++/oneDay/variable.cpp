/**
* ����: JTZ
* ʱ��: 2023/5/15
* �ļ�����: variable.cpp
* ���ܽ���: ���ܹ��� C++ �б�����ʹ��
*/
# include "iostream"
# include "string"  // �� C++ ��ʹ���ַ�����Ҫ�����ͷ�ļ�
using namespace std;

int main(){
    cout << " ������� " << endl;
    int I = 10;
    cout << " ���ͱ��� a = " << I << endl;

    cout << " ��������� " << endl;
    float F = 10.0f;
    double  D = 3.14;
    cout << " �����ͱ��� F = " << F << endl;
    cout << " �����ͱ��� D = " << D << endl;


    cout << " ����ַ��� " << endl;
    char C = 'a';
    cout << " �ַ��ͱ��� C = " << C << endl;


    cout << " ����ַ����� " << endl;
    string str = "hello world";
    char str1[] = "hello world";
    cout << " �ַ����ͱ��� str = " << str << endl;
    cout << " �ַ����ͱ��� str1[] = " << str1 << endl;


    cout << " ��������� " << endl;
    bool flag = true;
    cout << " �����ͱ��� flag = " << flag << endl;
}