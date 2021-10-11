#include <iostream> 
#include <math.h>
using namespace std;
int main () {
    int n, anpha; cin >> n;
    while(n--){
        cin >> anpha; 
        double k = 360.0/abs(anpha-180);
        if(k - int(k) == 0){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
}