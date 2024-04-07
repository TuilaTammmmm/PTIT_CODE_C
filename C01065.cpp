#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    int res[10]={0};
    while (n>0)
    {
        /* code */
        int x=n%10;
        res[x]++;
        n/=10;
    }
    if(res[2]>0) printf("2 %d\n",res[2]);
    if(res[3]>0) printf("3 %d\n",res[3]);
    if(res[5]>0) printf("5 %d\n",res[5]);
    if(res[7]>0) printf("7 %d\n",res[7]);
}