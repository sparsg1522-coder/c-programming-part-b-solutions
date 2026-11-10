#include <stdio.h>

int main(void) {
    long long n, k;
    if (scanf("%lld %lld", &n, &k) != 2) return 0;
    if (n < 0 || k <= 0) return 0;
    printf("%lld\n", n / k);
    return 0;
}

