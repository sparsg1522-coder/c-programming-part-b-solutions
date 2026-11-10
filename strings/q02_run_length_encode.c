#include <stdio.h>

#define MAX_LINE 1001

int main(void) {
    char text[MAX_LINE];
    if (scanf("%1000s", text) != 1) return 0;
    int i = 0;
    while (text[i] != '\0') {
        char current = text[i];
        int count = 0;
        while (text[i] == current) {
            count++;
            i++;
        }
        printf("%c%d", current, count);
    }
    putchar('\n');
    return 0;
}

