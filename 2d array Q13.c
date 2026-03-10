#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int count=0;

    for(int i=0;i<r;i++){

        int palindrome=1;

        for(int j=0;j<c/2;j++){
            if(a[i][j] != a[i][c-j-1]){
                palindrome=0;
                break;
            }
        }

        if(palindrome)
            count++;
    }

    printf("%d",count);
}