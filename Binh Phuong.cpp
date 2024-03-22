#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        unsigned long long a = n * n;
        printf("%llu\n", a);
    }

    return 0;
}


