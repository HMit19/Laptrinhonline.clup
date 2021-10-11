#include <iostream>

using namespace std;

int main () {
    long long n, x, y;
    int t; cin >> t; while (t--){
        cin >> n >> x >> y;
        for(int i = 2; i < n; i++){
        if(i % x == 0 && i % y != 0){
            cout << i << " ";
            }
        }
        cout << endl;
    }
}