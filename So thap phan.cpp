#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        double result = 1.0 / n;
        printf("%.15lf\n", result);
    }

    return 0;
}

