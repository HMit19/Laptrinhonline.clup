#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main () {
    int n, m, k, M, N, sl, vt;
    double l;
    while(true){
        cin >> n >> m;
        M = m > n ? m : n;
        N = n < m ? n : m;
        if(n == 0 && m == 0)return 0;
        cin >> l >> k;
        l = l/1000.0;
        sl = N/l;
        int a[k+2], count = 0;
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        sort(a, a+k, greater<int>());
        for(int i = 0; i < k; i++){
            if(a[i]==M){
                sl--;
                vt = i;
                count++;
            }
            else {
                int tg = a[(k--)-1];
                if(vt == (k-1))break;
                if(a[vt++] + tg >= M){
                    sl--;
                    count += 2;
                }
                if(sl==0){cout << count << endl;return 0;}
            }
        }
        cout << "không thể" << endl;
    }
}