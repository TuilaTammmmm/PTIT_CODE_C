#include <stdio.h>
#include <string.h>

int main() {
    char N[100];
    scanf("%s", N);
    int length = 0;
    for (int i = 0; i < strlen(N); i++) {
        if (N[i] >= '0' && N[i] <= '9') {
            length++;
        }
    }
    printf("%d\n", length);

    return 0;
}
