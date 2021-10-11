#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b, res = 0;
    cin >> a >> b;
    int m = a > b ? a : b;
    int n = a < b ? a : b;
    for(int i = n + 1; i < m; i++){
        res += i % 2 != 0 ? i : 0;
    }
    cout << res << endl;
}