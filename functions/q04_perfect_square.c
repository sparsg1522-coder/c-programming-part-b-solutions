#include <stdio.h>

int isPerfectSquare(long long n) {
    if (n < 0) return 0;
    long long low = 0, high = n < 3037000499LL ? n : 3037000499LL;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;
        if (square == n) return 1;
        if (square < n) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    printf("%d\n", isPerfectSquare(n));
    return 0;
}

