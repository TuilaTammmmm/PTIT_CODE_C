#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int T=0;
    while(N>0)
    {
    	T=T+N%10;
    	N=N/10;
	}
	printf("%d",T);
    return 0;
}
