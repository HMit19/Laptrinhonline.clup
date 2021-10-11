#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double n, tg;
    double res;
    cin >> n;
    if(n <0) {
        cout << "ERROR" << endl;
        return 0;
    }
    tg = n;
    n *= 50;
    res = n / 100.0;
    tg /= 50;
    res += (int)tg * 5;
    // cout << tg << endl;
    cout << res << endl;
    return 0;
}
