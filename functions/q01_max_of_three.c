#include <stdio.h>

long long maxOfThree(long long a, long long b, long long c) {
    long long largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    return largest;
}

int main(void) {
    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) return 0;
    printf("%lld\n", maxOfThree(a, b, c));
    return 0;
}

