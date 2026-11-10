#include <stdio.h>

#define MAX_LINE 1001

int main(void) {
    char line[MAX_LINE];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    if (fgets(line, sizeof line, stdin) == NULL) return 0;
    for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
        char ch = line[i];
        if (ch >= '0' && ch <= '9') digits++;
        else if (ch == ' ') spaces++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowels++;
            else consonants++;
        }
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}

