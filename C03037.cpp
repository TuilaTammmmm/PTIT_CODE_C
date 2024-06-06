#include<stdio.h>
#include<string.h>
int main(){
char A[19];
scanf("%18s",A);
int dem[10]={0};
for(int i=0;i<strlen(A);i++)
{
    char x=A[i];
    if(x=='2'||x=='3'||x=='5'||x=='7')
    {
    dem[x-'0']++;
    }
}
for(int i=0;i<strlen(A);i++)
{
    char x=A[i];
    if((x=='2'||x=='3'||x=='5'||x=='7')&&dem[x-'0']>0)
    {
    printf("%c %d\n",x,dem[x-'0']);
    dem[x-'0']=0;
    }
}
return 0;
}
