#include <stdio.h>

int main() {
    int a, U[32], dem = 0;
    scanf("%d", &a);
    
    if(a >= 0 && a <= 999) {
        if (a == 0) {
            printf("0");
            return 0;
        }

        while (a != 0 && dem < 32) {
            U[dem] = a % 2;
            a /= 2;
            dem++;
        }
        
        for (int i = dem - 1; i >= 0; i--) {
            printf("%d", U[i]);
        }
    }
    return 0;
}

