#include <stdio.h>

int main() {
    int i,num,result=0;
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        if(i%2==0){
            result+=i;
        }
    }
    
    printf("%d",result);

    return 0;
}