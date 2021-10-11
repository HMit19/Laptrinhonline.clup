#include <iostream>

using namespace std;

int main () {
    long long n, t, dem = 0; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 && i % 5 != 0 && i % 7 != 0)dem++;
            else if(i % 3 != 0 && i % 5 == 0 && i % 7 != 0)dem++;
            else if(i % 3 != 0 && i % 5 != 0 && i % 7 == 0)dem++;
            else if(i % 3 == 0 && i % 5 == 0 && i % 7 == 0)dem++;
        }
        cout << dem << endl;
        dem = 0;
    }
}