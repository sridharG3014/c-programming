#include <stdio.h>
int main() {
    int i,num,x=0,y=1,fibo;
    scanf("%d",&num);
    if(num==1||num==0)
    printf("%d ",0);
    else
        printf("%d %d ",0,1);
    for(i=1;i<=num-2;i++){
        fibo=x+y;
        x=y;
        y=fibo;
        printf("%d ",fibo);
        
        }
  
    return 0;
}