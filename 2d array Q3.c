#include <stdio.h>

int main(){

    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int maxUnique = 0;
    int index = 0;

    for(int i=0;i<r;i++){

        int count = 0;

        for(int j=0;j<c;j++){

            int unique = 1;

            for(int k=0;k<c;k++){
                if(j!=k && a[i][j] == a[i][k]){
                    unique = 0;
                    break;
                }
            }

            if(unique)
                count++;
        }

        if(count > maxUnique){
            maxUnique = count;
            index = i;
        }
    }

    printf("%d",index);
}