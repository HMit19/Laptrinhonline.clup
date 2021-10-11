#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    long long n;
    cin >> n;long long a[n+1];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long x, b, c;
    x = a[0] * a[1];
    b = a[n-2] * a[n-1];
    c = a[0] * a[n-1];
    cout << min(x, min(b, c)) << endl;
}