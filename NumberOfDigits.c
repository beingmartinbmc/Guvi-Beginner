#include <stdio.h>

int countDigits(int a){
    int c = 0;
    while (a > 0){
        c += 1;
        a /= 10;
    }
    return c;
}


int main(){
    int a;
    scanf("%d", &a);
    printf("%d", countDigits(a));
    return 0;
}
