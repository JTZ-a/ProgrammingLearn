/**
* 作者: JTZ
* 时间: 2023/5/16
* 文件名称: addressBookManagementSystem.cpp
* 功能介绍: 
*/
#include <optional>
#include "addressBookManagementSystem.h"

#define MAX_SIZE 100
struct Contact;
struct Contacts;
void printMenu();   // 菜单方法
void addContact(Contacts * contacts);   // 添加一个用户
void showContact(const Contacts& contacts);    // 显示所有联系人

struct Contact{
    string name;    // 名称
    string telephone;   // 电话号码
};

struct Contacts{
    Contact contact[MAX_SIZE];  //
    int m_Size; //通讯录中人员个数
};



int main() {
    int operate = 0;

    return 0;
}


/**
 * @FunctionName printMenu
 * @CreateTime 2023/5/16 17:35
 * @Author JTZ
 * @Description : 展示我们的菜单
 */
void printMenu(){
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

/**
 * @FunctionName addContact
 * @CreateTime 2023/5/16 17:49
 * @Author JTZ
 * @Description 添加一个联系人
 */
void addContact(Contacts * contacts){
    if(contacts->m_Size < MAX_SIZE){
        Contact contact;
        cout << " 请输入一个用户名: " << ends;
        cin >> contact.name;
        cout << " 请输入电话号码: " << ends;
        cin >> contact.telephone;
        contacts->m_Size++;
    } else{
        cout << "你的通讯录已经满了" << ends;
    }
}

/**
 * @FunctionName showContacts
 * @CreateTime 2023/5/16 17:53
 * @Author JTZ
 * @Description : 显示所有联系人
 */
void showContact(const Contacts& contacts){
    cout << "****************************" << endl;
    for (int i = 0; i < contacts.m_Size; i++){
        cout << "*\t姓名: " << contacts.contact[i].name << "\t 电话号码: " << contacts.contact[i].telephone << endl;
    }
    cout << "****************************" << endl;
}

/**
 * @FunctionName findContacts
 * @CreateTime 2023/5/16 19:47
 * @Author JTZ
 * @Description : 查找指定用户
 */
int findContact(const Contacts& contacts, const string& name){
    if (contacts.m_Size == 0){
        cout << " 不存在此用户 " << endl;
    } else{
        for (int i = 0; i < contacts.m_Size; i++) {
            if (contacts.contact[i].name == name){
                cout << " 存在此用户 " << endl;
                cout << "*\t姓名: " << contacts.contact[i].name << "\t 电话号码: " << contacts.contact[i].telephone << endl;
                return i;
            }else {
                cout << " 不存在此用户 " << endl;
            }
        }
    }
    return 0;
}

/**
 * @FunctionName delContact
 * @CreateTime 2023/5/16 20:02
 * @Author JTZ
 * @Description : 删除用户
 */
void delContact(Contacts contacts, const string& name){
    if(int i = findContact(contacts, name) != 0){
        for (;i < contacts.m_Size - 1; i++){
            contacts.contact[i] = contacts.contact[i+1];
            contacts.m_Size--;
        }
    }else {
        cout << " 不存在此用户 " << endl;
    }
}

/**
 * @FunctionName changeContact
 * @CreateTime 2023/5/16 20:09
 * @Author JTZ
 * @Description : 改变用户信息
 */
void changeContact(Contacts * contacts, const string& name){
    if (int i = findContact(*contacts, name) != 0){
        cout << " 请输入名称: " << ends;
        cin >> contacts->contact[i].name;
        cout << " 请输入电话好: " << ends;
        cin >> contacts->contact[i].telephone;
    }else {
        cout << " 用户不存在 " << endl;
    }
}

/**
 * @FunctionName clearContact
 * @CreateTime 2023/5/16 20:10
 * @Author JTZ
 * @Description : 清空联系人
 */
void clearContact(Contacts * contacts){
    contacts->m_Size = 0;
}