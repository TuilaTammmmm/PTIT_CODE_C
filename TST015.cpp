#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int a, b, c;
} tamgiac;

void nhapTamGiac(tamgiac *tg, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tg[i].a, &tg[i].b, &tg[i].c);
    }
}

double tinhDienTich(tamgiac tg) {
    double p = (tg.a + tg.b + tg.c) / 2.0;
    return sqrt(p * (p - tg.a) * (p - tg.b) * (p - tg.c));
}

void inTamGiac(tamgiac tg) {
    printf("%d %d %d\n", tg.a, tg.b, tg.c);
}

int compare(const void *a, const void *b) {
    tamgiac *tg1 = (tamgiac *)a;
    tamgiac *tg2 = (tamgiac *)b;
    double area1 = tinhDienTich(*tg1);
    double area2 = tinhDienTich(*tg2);
    if (area1 < area2) return -1;
    if (area1 > area2) return 1;
    return 0;
}
void ghiTamGiac(const char *filename, tamgiac *tg, int n) {
    FILE *file = fopen(filename, "wb");
    fwrite(tg, sizeof(tamgiac), n, file);
    fclose(file);
}
int main() {
    int n;
    scanf("%d", &n);
    tamgiac *tg = (tamgiac *)malloc(n * sizeof(tamgiac));
    nhapTamGiac(tg, n);
    qsort(tg, n, sizeof(tamgiac), compare);
    
    for (int i = 0; i < n; i++) {
        inTamGiac(tg[i]);
    }
    ghiTamGiac("FPLSP22GxxmsvTG.fpl", tg, n);
    free(tg);
    return 0;
}
