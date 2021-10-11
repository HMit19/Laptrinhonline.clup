#include <iostream>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int  x, y, z;  
    x = a + b - c;
    y = a + c - b;
    z = b + c - a;
    if(a == b || b == c || a == c || x == 0 || y == 0 || z == 0){
        cout << "S" << endl;
    }else cout << "N" << endl;
}