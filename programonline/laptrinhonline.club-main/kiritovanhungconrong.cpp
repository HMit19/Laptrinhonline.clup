#include<bits/stdc++.h>
using namespace std;
struct sao
{
	int rong;
	int kiem;
};
int main()
{
 
	sao A[10000];
	int i,n,pp;
	cin>>pp>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i].rong>>A[i].kiem;
	}
	sao tg;
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i].rong>A[j].rong)
			{
				A[i]=tg;
				A[i]=A[j];
				tg=A[j];
			}
		}
	}
	bool check=true;
	for(i=0;i<n;i++)
	{
		if(pp>=A[i].rong)
			pp+=A[i].kiem;
		else
			check=false;
	}
	if(check)	cout<<"YES";
	else	cout<<"NO";
}
