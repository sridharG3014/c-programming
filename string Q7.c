#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if(isalpha(ch)) {
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}