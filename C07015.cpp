#include <stdio.h>
#include <math.h>
struct Thisinh {
    char Ten[50];
    char NgaySinh[11];
    float m1,m2,m3,tong;
};
typedef struct Thisinh TS;

int main() {
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++) {
        TS[i].ma =i+1;
        scanf("%s", &TS[i].ten);
        scanf("%s", &TS[i].ngay_sinh);
        scanf("%f", &TS[i].diem1);
        scanf("%f", &TS[i].diem2);
        scanf("%f", &TS[i].diem3);
        TS[i].tong= TS[i].diem1 + TS[i].diem2 + TS[i].diem3;
    }
    return 0;
}
