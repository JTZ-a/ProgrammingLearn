/**
* ����: JTZ
* ʱ��: 2023/5/16
* �ļ�����: dowhileStructure.cpp
* ���ܽ���: ���� do..while ѭ���ṹ
*/
#include <valarray>
#include "iostream"

using namespace std;

int main(){
    cout << " ��ȡ��λ���ڵ����е�ˮ�ɻ��� " << endl;
    int num = 100;
    do {
        if ((pow(num%10, 3) + pow((num%100 - num%10)/10, 3) + pow((num - (num % 100))/100, 3)) == num){
            cout <<  num << endl;
        }
        num ++;
    } while (num < 1000);
}