#include <stdio.h>

int main() {
    int n, flag=1; scanf("%d",&n);
    int arr[n]; for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){ flag=0; break; }
        }
        if(!flag) break;
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}