#include <stdio.h>
#include <limits.h>

int main(){

    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxProduct = INT_MIN;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int x=i+1;x<r;x++){
                for(int y=0;y<c;y++){
                    int product = a[i][j] * a[x][y];

                    if(product > maxProduct)
                        maxProduct = product;
                }
            }
        }
    }

    printf("%d",maxProduct);
}