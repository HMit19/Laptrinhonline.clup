#include <stdio.h>

int main(){
	
	int p, dc;
	
	scanf("%d%d", &p ,&dc);
	
    printf("%d", (p*p-4*dc*dc)/8);
    
    return 0;
}