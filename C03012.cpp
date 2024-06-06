#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 50
bool CheckFibonacci(int n) {
    double sqrt5 = sqrt(5);
    double cong = (1 + sqrt5) / 2;
    double tru = (1 - sqrt5) / 2;
    for (int i = 0; i < MAX; i++) {
        int Fi = (1 / sqrt5) * (pow(cong, i) - pow(tru, i));
        if (n == Fi) {
            return true;
        }
        if (Fi > n) {
            break;
        }
    }
    return false;
}
int main() {
    int n;
    scanf("%d", &n);

    if (CheckFibonacci(n)) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
