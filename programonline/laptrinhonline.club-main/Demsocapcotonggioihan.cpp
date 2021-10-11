#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll ch(int a[], int k,  int n){
    int left = 0, right = n - 1;
    ll count = 0;
    while(left < right){
        if(a[left] + a[right] <= k){
            count += right - left;
            left++;
        }else right--;
    }
    return count;
}
int main () {
    int n, k;
    cin >> n >> k;
    int a[n + 1], b[n + 1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << ch(a, k, n);
}