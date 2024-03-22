#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(t;t>0;t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int rong = c - a;
        int cao = d - b;

        if (rong == cao) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
