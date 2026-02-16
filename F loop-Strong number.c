#include <stdio.h>
int main() {
    int i,num,fact=1,result=0,temp1,temp;
   
    scanf("%d",&num);
    temp1=num;
        for(i=1;num>0;i++){
            temp=num%10;
            
            for(int j=1;j<=temp;j++){
                fact*=j;
            }
            
        result+=fact;
       
        fact=1;
        num/=10;
        }
        if(result==temp1){
            printf("Strong number");
        } 
        else
            printf("Not strong number");
    

    return 0;
}