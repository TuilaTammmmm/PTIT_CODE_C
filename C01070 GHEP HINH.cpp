#include <stdio.h>
#include <math.h>

int xepchong(int r1, int c1, int r2, int c2, int r3, int c3) {
    if ((r1 == r2 && r2 == r3 && r1 == c1 + c2 + c3) || // r1=r2=r3=c1+c2+c3
        (c1 == c2 && c2 == c3 && c1 == r1 + r2 + r3) || // c1=c2=c3=r1+r2+r3
        (r1 == c2 && c2 == r3 && r1 == c1 + r2 + c3) || // r1=c2=r3=c1+r2+c3
        (r1 == c2 && c2 == c3 && r1 == c1 + r2 + r3) || // r1=c2=c3=c1+r2+r3
        (r1 == r2 && r2 == c3 && r1 == c1 + c2 + r3) || // r1=r2=c3=c1+c2+r3
        (c1 == r2 && r2 == r3 && c1 == r1 + c2 + c3) || // c1=r2=r3=r1+c2+c3
        (c1 == r2 && r2 == c3 && c1 == r1 + c2 + r3) || // c1=r2=c3=r1+c2+r3
        (c1 == c2 && c2 == r3 && c1 == r1 + r2 + c3)) {  // c1=c2=r3=r1+r2+c3
        printf("YES\n");
    }
}

int lungtung(int r1, int c1, int r2, int c2, int r3, int c3) {
    printf("YES\n");
}

int main() {
    int r1, r2, r3, c1, c2, c3;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    scanf("%d %d", &r3, &c3);

    int S1 = r1 * c1;
    int S2 = r2 * c2;
    int S3 = r3 * c3;
    int N = S1 + S2 + S3;
    int can = sqrt(N);

    if (can * can == N) {
        xepchong(r1, c1, r2, c2, r3, c3);
        lungtung(r1, c1, r2, c2, r3, c3);
    } else {
        printf("NO\n");
    }

    return 0;
}



