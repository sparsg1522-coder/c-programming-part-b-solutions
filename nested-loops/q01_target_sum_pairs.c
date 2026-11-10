#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n;
    long long target, values[MAX_N], count = 0;
    if (scanf("%d %lld", &n, &target) != 2 || n < 0 || n > MAX_N) return 0;
    for (int i = 0; i < n; i++)
        if (scanf("%lld", &values[i]) != 1) return 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (values[i] + values[j] == target) count++;
    printf("%lld\n", count);
    return 0;
}

