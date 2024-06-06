#include <stdio.h>
#include <stdbool.h>

int check(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s % 10 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int n;
        scanf("%d", &n);
        if (check(n)==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}