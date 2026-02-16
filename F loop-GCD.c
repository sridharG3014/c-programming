#include <stdio.h>

int main() {
    int i,num1,num2,temp,result = 0;

    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        temp=num2;
    else
        temp=num1;

    for(i=1;i<=temp;i++) {
        if(num1%i==0&&num2%i==0) {
            result=i;
        }
    }

    printf("%d",result);

    return 0;
}
