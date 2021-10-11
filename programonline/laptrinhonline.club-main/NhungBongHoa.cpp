#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, count=0;
	cin >> n;
	pair<int,int>p[n];
	map<int,int>a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		p[i].first = x;
		p[i].second = i;
		a[i] = 1;          
	}
	sort(p,p+n);
	for(auto x:p){
		if(a[x.second] == 1){
			count++;
			a[x.second] = 0;
			if(x.second == 0){
				a[x.second + 1]=0;         
			}
			else if(x.second == n-1) a[x.second-1]=0; 
			else{
				a[x.second+1] = 0;    
				a[x.second-1] = 0;  
			}
		}
	}
	cout << count;
	return 0;
}