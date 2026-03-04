#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){ scanf("%d",&arr[i]); sum+=arr[i]; }

    int leftSum=0, idx=-1;
    for(int i=0;i<n;i++){
        if(leftSum == sum - leftSum - arr[i]){
            idx=i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d", idx);
    return 0;
}