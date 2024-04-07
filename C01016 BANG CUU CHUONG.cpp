#include <stdio.h>

int main() {
    int N,x;
    scanf("%d", &N);
    for (int i = 1; i <= 10; i++) {
    	x=N;
        x = x * i;
        printf("%d ", x);
    }
    return 0;
}