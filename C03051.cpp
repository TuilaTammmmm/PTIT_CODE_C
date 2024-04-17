#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool prime[100000];
void SieveOfEratosthenes(int n)
{
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}
int main()
{
    memset(prime, true, sizeof(prime));
    SieveOfEratosthenes(1000000);
    int t;
    sca
	return 0;
}