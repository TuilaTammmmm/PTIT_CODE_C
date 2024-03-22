#include <stdio.h>

int main() {
    int r1, r2, r3, c1, c2, c3;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    scanf("%d %d", &r3, &c3);
   if ((c1 == c2 && c2 == c3) && (r1 + r2 + r3 == c1)) {
    printf("YES\n");
} else if ((c1 == r2 && c2 == c3) && (r1 + c2 + r3 == c1)) {
    printf("YES\n");
} else if ((c1 == r2 && r2 == r3) && (r1 + c2 + c3 == c1)) {
    printf("YES\n");
} else if ((r1 == r2 && r2 == c3) && (c1 + c2 + r3 == r1)) {
    printf("YES\n");
} else if ((r1 == c2 && r2 == c3) && (c1 + r2 + r3 == r1)) {
    printf("YES\n");
} else if ((r1 == c2 && r2 == r3) && (c1 + c2 + r3 == r1)) {
    printf("YES\n");
} else if ((r1 == r2 && r2 == c3) && (c1 + r2 + c3 == r1)) {
    printf("YES\n");
} else {
    printf("NO\n");
}
    return 0;
}
