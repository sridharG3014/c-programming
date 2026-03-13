#include<stdio.h>
int main(){
    char username[100];
    int count=0;
    printf("Enter Username:");
    scanf("%s",username);
    while(username[count]!='\0'){
        count++;
    }
        printf("Length Of Username:%d\n",count);
    
    return 0;
}