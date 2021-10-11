#include <stdio.h>
#include <math.h>
#define delta 0.0005
using namespace std;

int main () {
    double a, res = 1.0;
    scanf("%lf", &a);
    while(log(a)-res*log(res)>0.0005){
        res += delta;
    }
    printf("%lf", res);
    return 0;
}