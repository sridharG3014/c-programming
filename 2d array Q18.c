#include <stdio.h>
#include <stdlib.h>

int main() {

    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxDiff = 0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            for(int x=i+1;x<r;x++){
                for(int y=0;y<c;y++){

                    int diff = abs(a[i][j] - a[x][y]);

                    if(diff > maxDiff)
                        maxDiff = diff;
                }
            }

        }
    }

    printf("%d",maxDiff);
}