#include <stdio.h>
int SUM(int a)
{
    int s = 0;
    while (a != 1)
    {
        s+=x;
        a;
    }
    return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    long long S=0;
    while(t--)
    {
        int a;
        scanf("%d",&a);
        S+=SUM(a);
    }
    printf("%lld",S);
}