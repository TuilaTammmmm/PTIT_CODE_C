#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
        int cong = a + b;
        int tru = a - b;
        int nhan = a * b;
        int chianguyen=a/b;
        int chiadu = a % b;
        double chiathuc= (double)a / b;
        printf("%d \n %d \n %d \n %d \n %d \n %.2lf",cong,tru,nhan,chianguyen,chiadu,chiathuc);
    return 0;
}

