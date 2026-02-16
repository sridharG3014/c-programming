#include <stdio.h>
int main() {
    int i,num,range,result=0;
    scanf("%d %d",&num,&range);
    for (i=1;i<=range;i++){
        if(i%num==0){
            result+=i;}
        }
    printf("%d",result);

    return 0;
}