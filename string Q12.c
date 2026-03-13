#include <stdio.h>

int main() {
    char str[1000];
    int i, count = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(!((str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' ' || str[i] == '\n')) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}