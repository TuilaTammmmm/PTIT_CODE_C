#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int m, n;
        char c[10];
        scanf("%d%d ", &m, &n);
        gets(c);
        // getchar();
        // printf("%s",c);
        int a[m+5], b[n+5],res[m+n+5];
        int k=0;
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
            res[k++]=a[i];
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            res[k++]=b[i];
        }
        if(c[0]=='T')
        {
            bubbleSort(res,n+m);
            for (int i = 0; i < n+m; i++) {
                printf("%d ",res[i]);
        }
        }
        else if (c[0]=='G')
        {
                bubbleSort(res,n+m);
            for (int i = n+m-1; i >= 0 ; i--) {
                printf("%d ",res[i]);
        }
        }
        else if (c[0]=='F')
        {
            for (int i = 0; i < n+m; i++) {
                printf("%d ",res[i]);
        }
        }
        else if(c[0]=='A')
        {for (int i = 0; i < n; i++) {
            printf("%d ",b[i]);
            
        }
            for (int i = 0; i < m; i++) {
            printf("%d ",a[i]);
        }
        
        }
        printf("\n");
    
}
return 0;
}