#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int a[m+2];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a+m);
    int min = INT_MAX;
    for(int i = 0; i < m - n + 1; i++){
        min = min > a[i + n - 1] - a[i] ? a[i + n-1] - a[i] : min;
    }
    cout << min << endl;
    return 0;
}