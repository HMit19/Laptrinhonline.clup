#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    cin >> n;
    while(n--){
        int tg = 0;
        cin >> m; 
        while(m){
            tg +=m%3;
            m /= 3;
        }
        cout << tg << " ";
    }
    return 0;
}