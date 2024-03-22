#include <stdio.h>
#include <math.h>

int main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    int N;
    scanf("%d", &N);
    int canBacHai = sqrt(N);
    if (canBacHai * canBacHai == N) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
