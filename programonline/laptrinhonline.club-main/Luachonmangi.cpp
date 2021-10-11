#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    for(int i = 0; i < 100; i++){
        double a;
        cin >> a;
        if(a <= 10){
            if(a - (int)a != 0)cout << setprecision(1) << fixed  << "A[" << i << "] = " << a << endl;
            else cout << setprecision(0) << fixed << "A[" << i << "] = " << a << endl;
        }
    }
}
