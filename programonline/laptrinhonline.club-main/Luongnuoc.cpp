#include<bits/stdc++.h>

using namespace std;

int a[1000005],l[1000005],R[1000005];
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    l[1] = a[1];
    for(int i = 2; i <= n; i++) l[i] = max(l[i-1], a[i]);
    R[n] = a[n];
    for(int i = n - 1; i >= 1; i--) R[i] = max(R[i+1], a[i]);
    long long res = 0;
    for(int i = 2; i < n; i++){
        int k = min(l[i-1], R[i+1]);
        if(k > a[i]) res += k - a[i];
    }
    cout << res << endl;
}