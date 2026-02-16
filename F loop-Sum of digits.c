#include <stdio.h>
#include <string.h>

int main() {
    int i,num,sum=0;
    scanf("%d",&num);
    for (i=1;num>0;i++){
        sum+=num%10;
        num/=10;
        }
    printf("%d",sum);
    return 0;
}