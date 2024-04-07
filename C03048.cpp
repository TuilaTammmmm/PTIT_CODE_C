#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char N[18];
        scanf("%s", N);
        int chan = 0, le = 0;
        int l = strlen(N);
        for (int i = 0; i < l; i++) {
            if ((N[i] - '0') % 2 == 0) {
                chan++;
            } else {
                le++;
            }  
        }
        if (chan > le) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
