#include <stdio.h>

int main() {
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int maxLen=1, len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) len++;
        else len=1;
        if(len>maxLen) maxLen=len;
    }
    printf("%d", maxLen);
    return 0;
}