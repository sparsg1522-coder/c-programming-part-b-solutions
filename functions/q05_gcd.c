#include <stdio.h>

long long absoluteValue(long long value) {
    return value < 0 ? -value : value;
}

long long gcd(long long a, long long b) {
    a = absoluteValue(a);
    b = absoluteValue(b);
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    if (a == 0 && b == 0) return 0;
    printf("%lld\n", gcd(a, b));
    return 0;
}

