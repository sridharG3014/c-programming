#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter The Unit:");
    scanf("%d",&unit);
    if(bill<=100){
        bill=unit*5;
    }
    else if(bill<=200){
        bill=unit*5;
    }
    else{
        bill=unit*5;
    }
    printf("Bill Amount=Rs:%.0f",bill);
    return 0;
}