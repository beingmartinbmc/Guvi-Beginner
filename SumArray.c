#include <stdio.h>

int sumArray(int a[], int k){
    int s = 0;
    for(int i = 0; i < k; i ++)
        s += a[i];
    return s;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d", sumArray(a, k));
    return 0;
}
