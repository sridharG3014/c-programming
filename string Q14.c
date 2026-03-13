#include <stdio.h>

int main() {
    char src[1000], dest[1000];
    int i = 0;

    fgets(src, sizeof(src), stdin);

    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    printf("%s", dest);

    return 0;
}