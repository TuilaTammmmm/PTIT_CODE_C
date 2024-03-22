#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d",&a,&b);
     int tong = a + b;
    int hieu = a - b;
    long long tich = (long long )a * b;
    int chia_nguyen = a / b;
    int chia_du = a % b;
    float chia_thuc = (float)a / b;
    printf("%d\n", tong);
    printf("%d\n", hieu);
    printf("%d\n", tich);
    printf("%d\n", chia_nguyen);
    printf("%lld\n", chia_du);
    printf("%.2f\n", chia_thuc);
    return 0;
}
