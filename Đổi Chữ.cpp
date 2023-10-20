#include <stdio.h>
#include <string.h>
int main(){
int a;
char s[100];
printf("Nhập kí tự cần đổi:");gets(s);
printf("\n1 Để chuyển sang chữ thường \n2 Để chuyển sang chữ hoa");scanf("%d",&a);
switch (a)
{
case 1: 
    strlwr(s);
    printf("Chữ cái được viết thường là: %s",s);
    break;
case 2: 
    strupr(s);
    printf("Chữ cái được viết in hoa là: %s",s);
    break;
}
return 0;
}
