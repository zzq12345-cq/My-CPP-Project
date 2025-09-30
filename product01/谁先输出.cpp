#include "iostream"
using namespace std;

int main(){
    int a,b,t;
    cin >> a >> b;
    if (a < b){
        t = b;
        b = a;
        a = t;
    }
    cout << a << " " << b;
}