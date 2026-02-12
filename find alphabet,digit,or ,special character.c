#include<stdio.h>
#include <ctype.h>
int main(){
    char let;
    scanf("%c",&let);
    if(isdigit(let)){
        printf("Digit");
    }
    else if(isalpha(let)){
        printf("Alphabet");
    }else{
    printf("Special Character");}
    return 0;
}