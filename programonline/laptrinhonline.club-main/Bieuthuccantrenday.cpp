#include <bits/stdc++.h>

using namespace std;

double can1(double x){

    return sqrt(x);
}

int main () {
    int n; cin >> n;double a[n+1], s = 0;
    bool kt1 = true, kt2 = true;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        s += a[i];
        if(s < 0){
            cout << "Khong tinh duoc S1" << endl;
            kt1 = false; 
            break;
        }
        s = sqrt(s);
    }
    cout << setprecision(3) << fixed;
    if(kt1) cout << s << endl;
    s = 0;
    for(int i = n - 1; i >= 0; i--){
        s += a[i];
        if(s < 0){
            cout << "Khong tinh duoc S2" << endl;
            kt2 = false;
            break;
        }
        s = sqrt(s);
    }
    if(kt2)cout << s << endl;
}