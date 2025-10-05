#include "iostream"
using namespace std;

int main(){
    // 使用循环语句，计算从1加到10000的和
    int sum = 0;
    for (int i = 1; i <= 10000 ; ++i) {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}