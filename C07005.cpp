#include <stdio.h>
#include <math.h>
struct diem
{
    float a,b;
};
typedef struct diem diem;
float khoangcach(diem x,diem y)
{
    return sqrt((x.a-y.a)*(x.a-y.a)+(x.b-y.b)*(x.b-y.b));
}
int Ktra(float a, float b, float c)
{
    if (a == 0 || b == 0 || c == 0)
        return 0;
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        diem s1,s2,s3;
        scanf("%f%f%f%f%f%f",&s1.a,&s1.b,&s2.a,&s2.b,&s3.a,&s3.b);
        float x=khoangcach(s1,s2);
        float y=khoangcach(s2,s3);
        float z=khoangcach(s3,s1);
        if (Ktra(x, y, z) == 0)
            printf("INVALID\n");
        else
            printf("%0.3f\n", x + y + z);
    }
    return 0;
}