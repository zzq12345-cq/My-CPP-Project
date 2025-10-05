#include "iostream"
using namespace std;

int main(){
    //输入两个整数m和n（保证m<=n），输出从m加到n的和
    int m,n;
    cin >> m >> n;

    if (m <= n){
        int sum = 0; 
        for (int i = m; i <= n; ++i) {
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}