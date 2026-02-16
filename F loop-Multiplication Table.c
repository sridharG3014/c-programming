#include<stdio.h>
int main(){
    int i,num;
     scanf("%d",&num);
    if(num>0&&num<=20){
   
    for (i=1;i<=10;i++){
        printf("%dx%d=%d \n",num,i,i*num);
    }
    return 0;
}}