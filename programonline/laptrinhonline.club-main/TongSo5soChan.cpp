#include<stdio.h>
int main(){
	int x, d;
	while(1){
		scanf("%d", &x);
		if(x==0) break;
		d = 0;
		for(int i = x; i < x + 10; i++){
			if(i % 2 == 0)d+= i;
		}
		printf("%d\n", d);
	}
	return 0;
}