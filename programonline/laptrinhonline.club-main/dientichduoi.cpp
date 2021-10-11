#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double sta = 5, en = 6, s = 0, a[12][12];
    char c; cin >> c;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j <12; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 7; i <= 11; i++){
        for(int j = sta; j <= en; j++){
            s += a[i][j];
        }
        sta--;en++;
    }
    cout << setprecision(1) << fixed;
    s = c == 'S'? s : s /30;
    cout << s << endl;
}