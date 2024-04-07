#include<stdio.h>

#include<math.h>

int check(int n)      //4567      
{
    int previous=10;
    while (n>0)
    {
        int x=n%10;
        if(x>previous)
        {
            return 0;
        }
        else
        {
            previous=x;
        }
        n/=10;
    }
    return 1;
    
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int start=(int) pow(10,n-1);
        int end=(int) pow(10,n);
        for(int i=start;i<end;i++)
        {
            if(check(i))
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    
}