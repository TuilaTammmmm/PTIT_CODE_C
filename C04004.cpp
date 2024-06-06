#include <stdio.h>

long long fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    long long f1 = 1, f2 = 1, fn = 1;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }
    return 0;
}
