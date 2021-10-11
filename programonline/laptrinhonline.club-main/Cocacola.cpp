#include<iostream>

using namespace std;

int main(){
    int x, y, res = 0;
    cin >> x >> y;
    res = x;
    if(y == 1){
        res = x*2;
    }
    else {
        while(x >= y) {
            res += x/y;
            x = x/y + x % y;
        }
    }
    cout << res << endl;
    return 0;
}
