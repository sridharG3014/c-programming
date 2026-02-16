#include<stdio.h>
int main(){
    int membership;
    float purchase,FinalAmount;
    scanf("%d",&membership);
    scanf("%f",&purchase);
    if(membership==1){
        if (purchase>=100){
        FinalAmount=purchase-(purchase*0.20);
        printf("Final_Amount=%.2f",FinalAmount);
    }   
    else{

        FinalAmount=purchase-(purchase*0.10);
        printf("Final_Amount=%.2f",FinalAmount);
    }
    }
    else if(membership==0){
        FinalAmount=purchase;
        printf("Final_Amount=%.2f",FinalAmount);
    }
    else{
        printf("Invalid_Member");
    }
    return 0;
}