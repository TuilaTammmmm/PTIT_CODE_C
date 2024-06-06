#include <stdio.h>
#include <math.h>
struct Diem {
    double a, b;
};
typedef struct Diem Diem;
int Ktra(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }
    return 1;
}
double kc(Diem p1, Diem p2) {
    return sqrt((p1.a - p2.a) * (p1.a - p2.a) + (p1.b - p2.b) * (p1.b - p2.b));
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        Diem s1, s2, s3;
        scanf("%lf %lf %lf %lf %lf %lf", &s1.a, &s1.b, &s2.a, &s2.b, &s3.a, &s3.b);
        double x = kc(s1, s2);
        double y = kc(s1, s3);
        double z = kc(s3, s2);
        if (!Ktra(x, y, z)) {
            printf("INVALID\n");
        } else {
            double p = (x + y + z) / 2.0;
            double s = sqrt(p * (p - x) * (p - y) * (p - z));
            printf("%0.2lf\n", s);
        }
    }
    return 0;
}
