#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char c; cin >> c;
    double a[12][12], sta = 5, en = 6, s = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 7; i <= 11; i++){
        for(int j = sta; j <= en; j++){
            s += a[j][i];
        }
        sta--;
        en++;
    }
    cout << setprecision(1) << fixed;
    if(c == 'S')cout << s << endl;
    else cout << s/30 << endl;
}