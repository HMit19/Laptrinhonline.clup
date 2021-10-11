#include <stdio.h>
#include <algorithm>
using namespace std;

long long n;
long long a[100002], f[100002];
int main()
{
    scanf("%lld",&n);
    long long i,j;
    for (i=1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
        f[i]=1;
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]<a[j]) f[j]=max(f[i]+1,f[j]);
        }
    }
    long long res=0;
    for (i=1; i<=n; i++) res=max(res,f[i]);
    printf("%lld",res);
    return 0;
}