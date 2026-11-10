#include <stdio.h>

int main(void) {
    int n, found = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) return 0;
    for (long long a = 1; a <= n; a++) {
        for (long long b = a + 1; b <= n; b++) {
            for (long long c = b + 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    printf("%lld %lld %lld\n", a, b, c);
                    found = 1;
                }
            }
        }
    }
    if (!found) puts("None");
    return 0;
}

