#include <stdio.h>

#define MAX_N 1000

long long digitSum(long long value) {
    long long sum = 0;
    while (value > 0) {
        sum += value % 10;
        value /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    long long values[MAX_N], count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_N) return 0;
    for (int i = 0; i < n; i++)
        if (scanf("%lld", &values[i]) != 1 || values[i] < 0) return 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (digitSum(values[i]) == digitSum(values[j])) count++;
    printf("%lld\n", count);
    return 0;
}

