#include <stdio.h>
typedef long long ll;

int main () {
	ll n, m, l, r, s= 0;
	scanf("%lld%lld", &n, &m);
	ll a[100002];
	for(ll i = 0; i < n; i++)	{
		scanf("%lld", &a[i]);
	}while(m--){
		scanf("%lld%lld", &l, &r); 
		for(ll j = l-1; j < r; j++){
			s += a[j];
		}
		printf("%lld\n", s);
		s = 0;
	}
}