#include <stdio.h>
#include <math.h>
int Shcn(int a,int b)
{
    int S=a*b;
    return S;
}
int main() {
    int r1, r2, r3, c1, c2, c3;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    scanf("%d %d", &r3, &c3);
    int S1=Shcn(r1,c1);
    int S2=Shcn(r2,c2);
    int S3=Shcn(r3,c3);
    int TongDienTich=S1+S2+S3;
    int N=sqrt(TongDienTich);
    if (N*N==TongDienTich)
    {printf("YES\n");}
    else
    {printf("NO\n");}
    return 0;
}
