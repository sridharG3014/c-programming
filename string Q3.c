#include<stdio.h>
int main(){
    char email[100];
    int i;
    scanf("%s",email);
    for(i=0; email[i]!='@' && email[i]!= '\0';i++){
        printf("%c",email[i]);
    }
    return 0;
}