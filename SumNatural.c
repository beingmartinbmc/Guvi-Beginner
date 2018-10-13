#include <stdio.h>

int sumNatural(int n){
    return n*(n+1)/2;
}


int main(){
    int a;
    scanf("%d", &a);
    printf("%d", sumNatural(a));
    return 0;
}
