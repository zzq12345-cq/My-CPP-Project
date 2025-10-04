#include "iostream"
using namespace std;

int main(){
    char n;
    cin>>n;
    if (n != 'A' && n != 'B'){
        cout << 1 << endl;
    } else{
        cout << 2 << endl;
    }
    return 0;
}