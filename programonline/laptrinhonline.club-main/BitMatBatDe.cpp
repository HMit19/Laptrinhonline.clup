#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k, ctt=1;
	cin >> n >> k;
	queue<int>Q;
	for(int i=1;i<=n;i++){
		Q.push(i);
	}
	while(Q.size()>1){
		int a=Q.front();
		Q.pop();
		if(ctt != k){
			Q.push(a);
			ctt++;
		}
		else 
			ctt=1;
	}
	cout << Q.front();
	return 0;
}