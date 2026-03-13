#include <stdio.h>

int main() {
    char str[1000];
    int i, count = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}