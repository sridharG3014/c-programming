#include<stdio.h>
int main(){
    char password[100];
    int i;
 
    scanf("%s",password);
    for(i=0;password[i]!='\0';i++){
        if(password[i]>='A' && password[i]<='Z'){
        printf("Valid");
        return 0;
        }
    }
            printf("Invalid");
        
    
    return 0;
}