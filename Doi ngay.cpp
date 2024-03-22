#include <stdio.h>
#include <math.h>

int main() {
    int ngay;
    scanf("%d",&ngay);
    int nam=ngay/365;
    int ngayconlai=ngay%365;
    int tuan=ngayconlai/7;
    ngayconlai%=7;
    printf("%d %d %d",nam,tuan,ngayconlai);
    return 0;
}