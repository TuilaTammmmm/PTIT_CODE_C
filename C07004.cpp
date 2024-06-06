#include <stdio.h>
struct PS
{
    int tu,mau;
};
typedef struct PS PS;
int UCLN(int a, int b)
{
    while (a!=0)
    {
        int x=a;
        a=b%a;
        b=x;
    }
    return b;
}
int BCNN(int a, int b)
{
    return a*b/UCLN(a,b);
}
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        PS a, b, c;
        scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
        printf("Case #%d:\n",i);
        int x = UCLN(a.tu, a.mau);
        a.tu /= x;
        a.mau /= x;
        x = UCLN(b.tu, b.mau);
        b.tu /= x;
        b.mau /= x;
        int k = BCNN(a.mau, b.mau);
        a.tu *= k / a.mau;
        b.tu *= k / b.mau;
        a.mau = b.mau = k;
        printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);

        c.tu = a.tu + b.tu;
        c.mau = k;
        x = UCLN(c.tu, c.mau);
        c.tu /= x;
        c.mau /= x;
        printf("%d/%d\n", c.tu, c.mau);

        c.tu = a.tu * b.mau;
        c.mau = a.mau * b.tu;
        x = UCLN(c.tu, c.mau);
        c.tu /= x;
        c.mau /= x;
        printf("%d/%d\n", c.tu, c.mau);
    }
    return 0;
}