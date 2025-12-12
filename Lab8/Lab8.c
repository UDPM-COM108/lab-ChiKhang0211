#include <stdio.h>
#include <string.h>

//Định nghĩa cấu trúc
struct SinhVien{
    int MSSV;
    char Hoten[50];
    float Diem;
    char Hocluc[20];
};

void nhapsinhvien(struct SinhVien x[], int n){
    int i;
    for (i=0; i<n; i++){
       printf("Nhap thong tin sinh vien %d:\n", i + 1); 
       printf("Nhap MSSV[%d]: ", i);
       scanf("%d", &x[i].MSSV);
       getchar();
       printf("Nhap Hoten[%d]: ", i);
       gets(x[i].Hoten);
       printf("Nhap Diem[%d]: ", i);
       scanf("%f", &x[i].Diem);
    }
}

void xeploaisinhvien(struct SinhVien x[], int n){
    int i;
    for (i = 0; i < n; i++) {
        if (x[i].Diem < 5)
            strcpy(x[i].Hocluc, "Yeu");
        else if (x[i].Diem < 6.5)
            strcpy(x[i].Hocluc, "TrungBinh");
        else if (x[i].Diem < 8)
            strcpy(x[i].Hocluc, "Kha");
        else if (x[i].Diem < 9)
            strcpy(x[i].Hocluc, "Gioi");
        else
            strcpy(x[i].Hocluc, "Xuatsac");
    }
}

void xuatsinhvien(struct SinhVien x[], int n) {
    int i;
    printf("\n%-10s %-10s %-10s %-10s\n", "MSSV", "Hoten", "Diem", "Hocluc");
    
    for (i = 0; i < n; i++) {
        printf("%-10d %-10s %-10f %-10s\n", 
               x[i].MSSV, 
               x[i].Hoten, 
               x[i].Diem, 
               x[i].Hocluc);
    }
}

int main(){
    int slsv;
    struct SinhVien DS[50];
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &slsv);
    nhapsinhvien(DS,slsv);
    xeploaisinhvien(DS,slsv);
    xuatsinhvien(DS,slsv);
    return 0;
}
