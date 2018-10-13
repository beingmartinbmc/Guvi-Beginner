#include <stdio.h>

int checkOdd(int a){
    if(a < 0)
        return -1;
    return a & 1;
}

int main(){
    int a;
    scanf("%d", &a);
    if(checkOdd(a) == 1)
        printf("Odd");
    else if(checkOdd == 0)
        printf("Even");
    else
        printf("invalid");
    return 0;
}
