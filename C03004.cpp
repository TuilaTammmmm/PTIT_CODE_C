#include <stdio.h>
int UCLN(int a,int b)
{
    while(b>0)
    {
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
long long BCNN(int a, int b)
{
    return (long long)a * b / UCLN(a, b);
}

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d\n%lld",UCLN(a,b),BCNN(a,b));
    return 0;
}