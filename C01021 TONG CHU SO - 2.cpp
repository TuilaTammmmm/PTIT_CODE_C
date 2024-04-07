#include <stdio.h>

int main() {
    int test;
    scanf("%d",&test);
    while(test--)
    {
    	int N;
   		scanf("%d",&N);
    	int T=0;
    	while(N>0)
    	{
    	T=T+N%10;
    	N=N/10;
		}
	printf("%d\n",T);
	}
    return 0;
}