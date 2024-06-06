#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int A[100], B[100];
    for (int i = 0; i < m; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < m + n; i++)
    {
        if (i < k)
            printf("%d ", A[i]);
        else if (i >= k && i < k + n)
            printf("%d ", B[i - k]);
        else
            printf("%d ", A[i - n]);
    }
    return 0;
}