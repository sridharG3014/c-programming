#include <stdio.h>
#include <limits.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int max=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] > max){
                second = max;
                max = a[i][j];
            }
            else if(a[i][j] > second && a[i][j] != max){
                second = a[i][j];
            }
        }
    }

    printf("%d",second);
}