#include <bits/stdc++.h>

using namespace std;

int main () {
    char c;cin >> c;
    double a[12][12], s = 0, en = 10;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 11; i++) {
        for(int j = 0; j <= en; j++){
            s += a[i][j];
        }
        en--;
    }
    cout << setprecision(1) << fixed;
    if(c == 'S') cout << s << endl;
    else cout << s / 66 << endl;
}