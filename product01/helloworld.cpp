#include "iostream"
#include "cmath"
using namespace std;

int main(){
   double n;
   cin >> n;
    if (n == floor(n)){
        cout << n * 3 ;
    }else{
        cout << floor(n);
    }
    return 0;
}