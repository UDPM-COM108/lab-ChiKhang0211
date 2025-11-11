#include <stdio.h>

int main()
{
//#bai 1: tong 
    float a, b, cong, tru;
    printf("Nhap a\n");
    scanf("%f", &a);
    printf("Nhap b\n");
    scanf("%f", &b);
    cong = a + b;
    tru = a - b;
    printf("Tong la %f\n", cong);
    printf("Tru la %f\n", tru);

//#bai 2: xay dung chuong trinh tinh chu vi dien tich hcn
    float cd, cr, cv, dt;
    printf("Nhap chieu dai\n");
    scanf("%f", &cd);
    printf("Nhap chieu rong\n");
    scanf("%f", &cr);
    cv = (cd + cr) * 2;
    dt = cd * cr;
    printf("Chu vi la %f\n", cv);
    printf("Dien tich la %f\n", dt);

//#bai 3: xay dung chuong trinh tinh chu vi dien tich hinh tron
    float bk, cvht, dtht;
    const float PI = 3.14;
    printf("Nhap ban kinh hinh trong \n");
    scanf("%f", &bk);
    cvht = 2 * bk * PI;
    dtht = bk * bk * PI;
    printf("Chu vi hinh tron la %f\n", cvht);
    printf("Dien tich hinh tron la %f\n", dtht);

//#bai 4: xay dung chuong trinh tinh diem trung binh
    float toan,ly,hoa,dtb;
    printf("Nhap diem toan");
    scanf("%f", &toan); 
    printf("Nhap diem ly");
    scanf("%f", &ly); 
    printf("Nhap diem hoa");
    scanf("%f", &hoa);
    dtb = ( (toan * 3) + (ly *2) + hoa ) / 6;
    printf("Diem trung binh la %f\n",dtb);

//#bai 5: tinh chu vi, dien tich tam giac vuong 
    float gv1,gv2,canhhuyen,cvtg,dttg;
    printf("Nhap goc vuong 1 cua tam giac");
    scanf("%f",&gv1);
    printf("Nhap goc vuong 2 cua tam giac");
    scanf("%f",&gv2);
    printf("Nhap canh huyen");
    scanf("%f",&canhhuyen);
    cvtg = gv1 + gv2 +canhhuyen;
    dttg = 0.5 * gv1 * gv2;
    printf("Chu vi hinh tam giac la %f\n",cvtg);
    printf("Dien tich hinh tam giac la %f",dttg);
    return 0;
}