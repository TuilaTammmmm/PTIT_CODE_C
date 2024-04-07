#include <stdio.h>

int main() {
    int u0, d, N;
    int S = 0;
    scanf("%d %d %d", &u0, &d, &N);
    for (int i = 0; i < N; i++) {
        S += u0;
        u0 += d;
    }
    printf("%d\n", S);
    return 0;
}
