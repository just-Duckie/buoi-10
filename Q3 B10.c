#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    int nonVowelCount = 0;
    int i; 

    printf("Enter s: ");
    fgets(s, sizeof(s), stdin);
    for (i=0;i<strlen(s);i++) {
        char ch = tolower(s[i]);
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='\n') {
            nonVowelCount++;
        }
    }
    printf("%d\n", nonVowelCount);
    return 0;
}

