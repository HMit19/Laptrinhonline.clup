#include <iostream>
using namespace std;

int main (){ 
    int t;cin >> t;
    int n;
    while(t--){
        cin >> n;
        int tich = 1;
        for(int i = 1; i <= n; i++){
            tich *= i; //
        }
        cout << tich << endl;
    }
    return 0;
}
