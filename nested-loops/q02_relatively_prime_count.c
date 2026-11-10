#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void) {
    long long n, m, count = 0;
    if (scanf("%lld %lld", &n, &m) != 2 || n <= 0 || m < 0) return 0;
    for (long long x = 1; x <= m; x++)
        if (gcd(x, n) == 1) count++;
    printf("%lld\n", count);
    return 0;
}

