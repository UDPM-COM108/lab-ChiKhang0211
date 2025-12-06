#include <stdio.h>
//Kiểu cấu trúc
struct SINHVIEN{
    int MSSV;
    char HOTEN[50];
    float diem;
};

int main(){
    struct SINHVIEN SV1;
    printf("Nhap MSSV: ");
    scanf("%d", &SV1.MSSV);
    printf("Nhap HOTEN: ");
    scanf("%s", SV1.HOTEN);
    printf("Nhap diem: ");
    scanf("%f", &SV1.diem);
    

    //Xuất ra thông tin
    printf("Mssv: %d - HOTEN: %s - Diem: %.2f",
           SV1.MSSV,SV1.HOTEN,SV1.diem);
    
    return 0;
}