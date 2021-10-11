#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int n; double a[12][12]; char c;
    cin >> n >> c;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++){
            cin >> a[i][j];
        }
    }
    double tong = 0;
    for(int i = 0; i < 12; i++){
        tong += a[i][n];
    }
    cout << setprecision(1) << fixed;
    if(c == 'S') cout << tong  << endl;
    else cout << tong / 12 << endl;
}