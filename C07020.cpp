#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    int DaCan;
    int DaCo;
    int TienHoa;
} Pkm;
int main() {
    int N;
    scanf("%d", &N);
    Pkm Pkms[70];
    for (int i = 0; i < N; i++) {
        scanf("%s", Pkms[i].name);
        scanf("%d %d", &Pkms[i].DaCan, &Pkms[i].DaCo);
        Pkms[i].TienHoa = 0;
    }
    int TongTienHoa = 0;
    for (int i = 0; i < N; i++) {
        while (Pkms[i].DaCo >= Pkms[i].DaCan) {
            Pkms[i].TienHoa++;
            Pkms[i].DaCo -= Pkms[i].DaCan;
            Pkms[i].DaCo += 2;
        }
        TongTienHoa += Pkms[i].TienHoa;
    }
    int TienHoaNhieu = 0;
    int Dem = 0;
    for (int i = 0; i < N; i++) {
        if (Pkms[i].TienHoa > TienHoaNhieu) {
            TienHoaNhieu = Pkms[i].TienHoa;
            Dem = i;
        }
    }
    printf("%d\n", TongTienHoa);
    printf("%s\n", Pkms[Dem].name);
    return 0;
}
