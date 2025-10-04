#include "iostream"
using namespace std;

int main(){
    // 使用循环语句，在第一行输出ABCD…YZ共26个大写字母，然后在第二行输出abcd…yz共26个小写字母，第二行输出完也要换行
    for (char i = 'A'; i <= 'Z'; ++i) {
        cout << i ;
    }
    cout << endl;
    for (char c = 'a'; c <= 'z'; ++c) {
        cout << c;
    }
    return 0;
}