#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int m,i;
        scanf("%d",&m);

        char a[m+5];
        double b[m+5];


        for(int i=0;i<m;i++)
        {
            scanf("%c",&a[i]);
        }


        for(i=0;i<m;i++)
        {
            scanf("%lf",&b[i]);
        }
        
        //B1
        for(int i = 0; i < m - 1; i++) 
        {
                if(b[i] > b[i+1]) 
                {
                int tg = b[i];
                b[i] = b[i+1];
                b[i+1] = tg;        
                }
        }

        for (int i = 0; i < m; i++) 
        {
            printf("%.3lf ",b[i]);
        }
    }
    return 0;
}