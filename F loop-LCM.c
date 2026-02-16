#include <stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int max = (a > b) ? a : b;
    for(i = max; ;i++) {
        if(i%a==0&&i%b==0) {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
//first try
#include <stdio.h>

int main() {
    int g_num,l_num,m_num1,m_num2,num1,num2,temp=0,result = 0;

    scanf("%d %d",&num1,&num2);
    if (num1>num2){
        g_num=num1;
        l_num=num2;
    }
        
    else{
        g_num=num2;
        l_num=num1;}

    for(int i=1;temp<1;i++) {
        m_num1=g_num*i;
       
        for(int j=1;j<=m_num1;j++){
            m_num2=l_num*j;
            
            if(m_num2==m_num1){
                result=m_num2;
                temp+=1;
                break;
            }
        
            
            
        }
       if(temp==1)
            break;
        
        }
    

    printf("%d",result);

    return 0;
}
