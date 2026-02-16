#include <stdio.h>
#include <string.h>

int main() {
    int i,num,result=1,power;
    scanf("%d %d",&num,&power);
    
    if(power==0)
        printf("O");
    else{
    for (i=1;i<=power;i++){
        result*=num;
    }
        }
    printf("%d",result);
    return 0;
}