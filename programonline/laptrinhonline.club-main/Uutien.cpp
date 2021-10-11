#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100005], count[8] = {};
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        count[a[i]]++;
    }
    int t = 3;
    while(t--){
        int t = *max_element(count+1, count+7);
        for(int j=1; j<=n; j++) {
            if(count[a[j]]== t) {
                cout << a[j] << " ";
                count[a[j]] = 0;
                break;
            }
        }
    }
}