#include <stdio.h>

int main() {
    unsigned long long a, b;
    unsigned long long tong = 0;
    scanf("%llu %llu", &a, &b);
    if (a > b) {
        unsigned long long temp = a;
        a = b;
        b = temp;
    }
    for (unsigned long long i = a; i <= b; i++) {
        tong += i;
    }
    printf("%llu\n", tong);
    return 0;
}
