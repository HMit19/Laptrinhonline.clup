#include<stdio.h>
#include<math.h>
int main ()
{
    long long S,n,T,a,b,delta,x1,x2;
    scanf("%lld",&S);
    scanf("%lld",&n);
    scanf("%lld",&T);
    a=T-n*n;
    b=S*n;
    delta=a*a-4*n*b;
    x1=(a+sqrt(delta))/(2*n);
    x2=(a-sqrt(delta))/(2*n);
    printf("%lld %lld",x1,x2);
    return 0;
}