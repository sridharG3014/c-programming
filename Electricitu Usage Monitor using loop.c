#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int totalElectricity;
    int totalUnits=0;
    
    for(int i=0;i<N;i++){
        scanf("%d",&totalElectricity);
        totalUnits+=totalElectricity;
    }
    printf("Total Units:%d",totalUnits);
    
    return 0;
}