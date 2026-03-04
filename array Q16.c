#include <stdio.h>
#include <limits.h>

int main() {
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int minPrice=INT_MAX, maxProfit=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<minPrice) minPrice=arr[i];
        int profit=arr[i]-minPrice;
        if(profit>maxProfit) maxProfit=profit;
    }
    printf("%d", maxProfit);
    return 0;
}