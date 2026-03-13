#include <stdio.h>

int main() {
    char str[1000];
    int i, spaces = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
    }

    if(str[0] == '\n') 
        printf("0");
    else
        printf("%d", spaces + 1);

    return 0;
}