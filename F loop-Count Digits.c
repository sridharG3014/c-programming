#include <stdio.h>
#include <string.h>
int main() {
    int i,num,result;
    scanf("%d",&num);
    for (i=1;num>0;i++){
        num/=10;
        result=i;
        }
    printf("%d",result);
    return 0;
}