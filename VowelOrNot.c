#include <stdio.h>
#include <ctype.h>

int isVowel(char a){
    if(isalpha(a)){
        a = tolower(a);
        return (a == 'a'|| a == 'e' || a == 'o' || a == 'u' || a == 'i');
    }
    return -1;
}

int main(){
    char a;
    scanf("%c", &a);
    if(isVowel(a) == 1)
        printf("Vowel");
    else if(isVowel(a) == 0)
        printf("Consonant");
    else
        printf("invalid");
    return 0;
}
