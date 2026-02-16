#include <stdio.h>
int main() {
    int i,num,temp,result=0;
    scanf("%d",&num);
    for (i=1;num>0;i++){
        temp=num%10;
        if(temp%2==0){
            result+=1;}
            num/=10;
        }
    printf("%d",result);

    return 0;
}