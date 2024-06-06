#include <stdio.h>
void sapxep(int A[],int n)
{
    for(int i=0; i<n; i++){
    for(int j=n-1; j>i; j--){
      if(A[j] < A[j-1]){
        int temp = A[j];
        A[j] = A[j-1];
        A[j-1] = temp;
      }
    }
  }
}
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
    sapxep(Chan,demchan);sapxep(Le,demle);
    for (int i=0;i<demchan;i++) {
        printf("%d ",Chan[i]);
    }
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
