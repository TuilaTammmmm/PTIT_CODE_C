#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = 1;
    while (n > 0)
    {
        t *= n % 10;
        n /= 10;
    }
    printf("%d", t);
    return 0;
}