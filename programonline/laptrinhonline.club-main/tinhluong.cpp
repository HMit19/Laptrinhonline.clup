#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a[10000],b[10000],c[10000],dem=0,tong[10000],tong1=0,tong2=0,tong3=0,tong4=0,tong5=0;
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>0&&b[i]>0&&c[i]>0&&b[i]<480)
			dem++;
	}
	if(dem==n)
	{
		for(int i=0;i<n;i++)
		{
			tong[i]=b[i]*c[i];
			tong5+=b[i]; 
			tong1+=tong[i];
			tong2=tong1/n;
			tong3+=b[i];
			tong4=tong1/tong5;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" "<<tong[i]<<endl;
		}
		cout<<tong4<<" "<<tong2<<" "<<tong1;
	}
	else
		cout<<"So lieu sai";
}