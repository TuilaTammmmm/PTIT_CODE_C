#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);
    for (int i = 1; i <= height; ++i) {
        int chan=2,le=1;
        for (int j = 1; j <= i; ++j) {

            if (i % 2 == 0) {
                printf("%d",chan);
                chan += 2;
            } else {
                printf("%d",le);
                le += 2;
            }
        }
        printf("\n");
    }
    return 0;
}
