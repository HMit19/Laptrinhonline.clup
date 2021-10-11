#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b)    for(int i = a; i < b; i ++)
 
static int a[1005][1005] = {};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	int n, m;
//	freopen("input.txt","r",stdin);
	cin >> n >> m;
	FOR(1,n+1)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if(i != 1 && j != 1)
				a[i][j] += max(a[i-1][j],a[i][j-1]);
			else if(i == 1 && j != 1)
				a[i][j] += a[i][j-1];
			else if(i != 1 && j == 1)
				a[i][j] += a[i-1][j];
		}
	}
	cout << a[n][m];
}