#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n;
    long long values[MAX_N];
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_N) return 0;
    for (int i = 0; i < n; i++)
        if (scanf("%lld", &values[i]) != 1) return 0;
    if (n == 0) {
        puts("0");
        return 0;
    }
    int current = 1, best = 1;
    for (int i = 1; i < n; i++) {
        if (values[i] > values[i - 1]) current++;
        else current = 1;
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}

