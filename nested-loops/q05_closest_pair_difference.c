#include <stdio.h>

#define MAX_N 1000

int main(void) {
    int n;
    long long values[MAX_N];
    if (scanf("%d", &n) != 1 || n < 2 || n > MAX_N) return 0;
    for (int i = 0; i < n; i++)
        if (scanf("%lld", &values[i]) != 1) return 0;
    long long best = values[0] >= values[1] ? values[0] - values[1] : values[1] - values[0];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long difference = values[i] >= values[j] ? values[i] - values[j] : values[j] - values[i];
            if (difference < best) best = difference;
        }
    }
    printf("%lld\n", best);
    return 0;
}

