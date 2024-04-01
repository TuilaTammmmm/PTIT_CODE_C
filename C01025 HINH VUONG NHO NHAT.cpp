#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
int min(int a,int b)
{
    if(a>b)
    return b;
    return a;
}
int main(){
    int x1,x2,y1,y2;
    int x3,x4,y3,y4;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
    int xmax = max(x2,x4);
    int ymax = max(y2,y4);
    int xmin = min(x1,x3);
    int ymin = min(y1,y3);
    int cao = xmax - xmin;
    int rong = ymax - ymin;
    int a = max(cao,rong);
    printf("%d",a*a);
    return 0;
}