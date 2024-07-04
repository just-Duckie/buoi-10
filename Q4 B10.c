#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[101];
    char result[101];
    int j = 0;
    printf("Enter s: ");
    fgets(s, sizeof(s), stdin);

    size_t length = strlen(s);
    if (length > 0 && s[length - 1] == '\n') {
        s[length - 1] = '\0';
    }
    int i; 
    for (i = 0; i < strlen(s); i++) {
        if (isalpha(s[i]) || isspace(s[i])) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0'; 
    printf("%s\n",result);

    return 0;
}

