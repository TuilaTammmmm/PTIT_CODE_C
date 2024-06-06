#include <stdio.h>
typedef struct SP
{
    int ma;
    char ten[100], loai[100];
    double mua,ban, loi;
}SP;
void nhap(SP sp[], int i)
{
    sp[i].ma = i + 1;
    scanf("\n%[^\n]s", sp[i].ten);
    scanf("\n%[^\n]s", sp[i].loai);
    scanf("%lf %lf", &sp[i].mua, &sp[i].ban);
    sp[i].loi = sp[i].ban - sp[i].mua;
}
void sort(SP sp[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (sp[j].loi > sp[i].loi)
            {
                SP temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
}
void in(SP sp[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d %s %s %g\n", sp[i].ma, sp[i].ten, sp[i].loai, sp[i].loi);
}
int main()
{
    int n;
    scanf("%d", &n);
    SP sp[n];
    for (int i = 0; i < n; i++)
    nhap(sp, i);
    sort(sp, n);
    in(sp, n);
    return 0;
}