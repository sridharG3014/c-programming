#include <stdio.h>
#include <string.h>

int main() {
    int i,num,len;
    scanf("%d",&num);
    for (i=1;num>0;i++){
        printf("%d",num%10);
        num/=10;
        }
    return 0;
}