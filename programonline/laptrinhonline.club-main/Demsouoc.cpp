#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[100000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%lld\n", a[i]/3 + a[i]/5 + a[i]/7 - (a[i]/15 + a[i]/21 + a[i]/35) + a[i]/105);
	}
}