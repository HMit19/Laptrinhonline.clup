#include<stdio.h>

int count(int a[], int n) {
    int d = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == 1) d++;
    }
    return d;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100], b[100];
    int max = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for(int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if(a[j] == 1) a[j] = 0;
            else a[j] = 1;
            if(max < count(a, n)){
                max = count(a, n);
            }
        }
        for(int k = 0; k < n; k++){
            a[k] = b[k];
        }
    }
    printf("%d", max);
    return 0;
}
