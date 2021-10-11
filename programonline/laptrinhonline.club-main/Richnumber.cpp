#include <iostream>

using namespace std;

int main () {
    int n; cin >> n;
    int tong = 1;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0)tong += i;
    }
    if(n<=1 || tong <= n){
        cout << "Poor Number" << endl;
    }else cout << "Rich Number" << endl;
}