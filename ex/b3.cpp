#include<iostream>

using namespace std;

int main(){
    int x, y, res = 0;
    double tg = 0;
    cin >> x >> y;
    res = x;
    abc:
    tg = 1.0*x / y;
    x = (int)tg;
    res += (int)tg;
    x += (tg - (int)tg) * y;
    if(x >= y) goto abc;
    cout << res << endl;
    return 0;
}