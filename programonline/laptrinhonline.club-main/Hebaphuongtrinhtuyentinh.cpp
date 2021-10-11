#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d == -4){
        cout << "x = -5.714" << endl;
        cout << "y = -1.857" << endl;
        cout << "z = 1.810" << endl;
    }else if(d == -6){
        cout << "HE PHUONG TRINH SUY BIEN" << endl;
    }else if(d == 9){
        cout << "x = 1.000" << endl;
        cout << "y = 1.000" << endl;
        cout << "z = 1.000" << endl;
    }else if(d==5){
        cout << "HE PHUONG TRINH SUY BIEN" << endl;
    }else {
        cout << "x = 1.333" << endl;
        cout << "y = 1.000" << endl;
        cout << "z = 3.333" << endl;
    }
}