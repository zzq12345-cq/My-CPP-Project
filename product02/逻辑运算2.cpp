#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (abs(a - b) <= 100){
        cout << 0;
    } else {
        cout << 1;
    }
    return 0;
}