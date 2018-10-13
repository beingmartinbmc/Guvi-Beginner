#include <stdio.h>

int checkLeap(int a){
    return (a % 400 == 0 || ( (a % 4 == 0)  && (a % 100 != 0)));
}

int main(){
    int a;
    scanf("%d", &a);
    if(checkLeap(a))
        printf("yes");
    else
        printf("no");
    return 0;
}
