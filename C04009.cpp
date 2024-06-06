#include <stdio.h>
void tachchanle(int A[],int n)
{
    int Chan[100],Le[100];
    int demchan=0,demle=0;
    for (int i=0;i<n;i++) {
        if (A[i]%2==0) {
            Chan[demchan++]=A[i];
        } else {
            Le[demle++]=A[i];
        }
    }
    for (int i=0;i<demchan;i++) {
        printf("%d ",Chan[i]);
    }
    printf("\n");
    for (int i=0;i<demle;i++) {
        printf("%d ",Le[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int A[100];
    for (int i=0;i<n;i++) {
        scanf("%d",&A[i]);
    }
    tachchanle(A,n);
    return 0;
}
