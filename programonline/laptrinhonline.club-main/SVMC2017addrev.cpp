#include <iostream>
#include <algorithm>
#include <math.h>

int dao(int n){
    int res = 0, tmp;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}

using namespace std;

int main () {
    int t,a ,b; cin >> t;
    while(t--){
        cin >> a >> b;
        a = dao(a);
        b = dao(b);
        a = a + b;
        cout << dao(a) << endl;
    }
}