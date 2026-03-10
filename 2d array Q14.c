#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxSum=-999999;
    int index=0;

    for(int j=0;j<c;j++){

        int sum=0;

        for(int i=0;i<r;i++)
            sum += a[i][j];

        if(sum > maxSum){
            maxSum = sum;
            index = j;
        }
    }

    printf("%d",index);
}