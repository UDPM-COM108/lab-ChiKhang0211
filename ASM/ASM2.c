#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() { 
    int choice;
    do {
        printf("\n-----ASM2 cua Van Chi Khang PS49634-----\n");
        printf("1. Chuc nang kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi so chung cua 2 con so\n");
        printf("3. Chuc nang tinh tien cho quan karaoke\n");
        printf("4. Chuc nang tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Chuc nang tinh lai vay ngan hang vay tra gop\n");
        printf("7. Chuc nang tinh tien mua xe\n");
        printf("8. Chuc nang sap xep thong tin sinh vien\n");
        printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
        printf("10. Chuc nang tinh toan phan so\n");
        printf("0. Thoat ra ngoai\n");
        printf("Moi ban nhap chuc nang: ");
        
        scanf("%d", &choice);

        switch (choice) {
        case 1: { 
            float x;
            printf("Nhap x: ");
            scanf("%f", &x);
            
            if (x == (int)x) {
                int n = (int)x;
                printf("%.0f la so nguyen.\n", x);
        
                // Kiem tra so nguyen to
                int isPrime = (n < 2) ? 0 : 1;
                for (int i = 2; i <= sqrt(n); i++) {
                    if (n % i == 0) { isPrime = 0; break; }
                }
                if (isPrime) printf("%d la so nguyen to.\n", n);
                else printf("%d khong phai so nguyen to.\n", n);

                // Kiem tra so chinh phuong
                int can = sqrt(n);
                if (can * can == n) printf("%d la so chinh phuong.\n", n);
                else printf("%d khong phai so chinh phuong.\n", n);
            } else {
                printf("%.2f khong phai so nguyen.\n", x);
            }
            break;
        }

        case 2:
        {   
            int x, y;
            printf("x = "); scanf("%d", &x);
            printf("y = "); scanf("%d", &y);
            int a = abs(x);
            int b = abs(y);
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int ucln = a;
            int bcnn = 0;
            if (ucln != 0) bcnn = abs((x * y) / ucln);
            printf("UCLN = %d\n", ucln);
            printf("BCNN = %d\n", bcnn);
            break;
        }

        case 3:
        {
            int bd,kt,time,adt;
            float pay,adm;
            printf("\nNhap gio bat dau: ");
            scanf("%d",&bd);
            printf("Nhap gio ket thuc: ");
            scanf("%d",&kt);
            time = kt-bd;
            if(time<=3){
               pay = time*150000;
            }else{
               adt = time-3;
               adm = adt*150000*0.7;
               pay = 3*150000+adm;
            }
            if (bd>=14 && bd<=17){
               pay = pay*0.9;
            }
            printf("Tong so tien can thanh toan la: %.2f",pay);
            printf("\n");
            break;
        }

        case 4:
        {
            float kwh, bill;
            printf("So dien tieu thu: ");
            scanf("%f", &kwh);
            const int lim1 = 50, lim2 = 100, lim3 = 200, lim4 = 300, lim5 = 400;
            const long lv1 = 1678, lv2 = 1734, lv3 = 2014, lv4 = 2536, lv5 = 2834, lv6 = 2937;
            
            if (kwh <= 50) bill = kwh * lv1;
            else if (kwh <= 100) bill = lim1 * lv1 + (kwh - lim1) * lv2;
            else if (kwh <= 200) bill = lim1 * lv1 + (lim2-lim1)*lv2 + (kwh - lim2) * lv3; 
    
             else if (kwh <= 300) bill = lim1 * (lv1 + lv2) + lim2 * lv3 + (kwh - lim3) * lv4;
             else bill = kwh * 2000; 

            printf("Hoa don tam tinh: %.0f\n", bill);
            break;
        }

        case 5:
        {
            int money;
            printf("So tien can doi: ");
            scanf("%d", &money);
            int face_value[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            for (int i = 0; i < 9; i++)
            {
                int count = money / face_value[i];
                if (count > 0) printf("%d to %d\n", count, face_value[i]);
                money = money % face_value[i];
            }
            break;
        }

        case 6:
        {
            float tien_vay;                              
            printf("Số tiền vay: \n");                      
            scanf("%f", &tien_vay);                        
            float lai_suat = 0.05;                         
            int ky_han = 12;                              
            float tien_goc_hang_thang = tien_vay / ky_han; 
            float tien_goc_con_lai = tien_vay;             
            // Vòng lặp in bảng trả nợ cho 12 tháng
            for (int i = 1; i <= ky_han; i++)
            {
                float tien_lai = tien_goc_con_lai * lai_suat;            
                float tong_tien = tien_goc_hang_thang + tien_lai;         
                tien_goc_con_lai = tien_goc_con_lai - tien_goc_hang_thang; 
                // In thông tin chi tiết từng tháng
                printf("Kỳ hạn: %d\n", i);
                printf("Tiền lãi: %.0f\n", tien_lai);
                printf("Tiền gốc hàng tháng: %.0f\n", tien_goc_hang_thang);
                printf("Tổng tiền: %.0f\n", tong_tien);
                printf("Tiền gốc còn lại: %.0f\n", tien_goc_con_lai);
                printf("\n"); // Cách dòng
            }
            break;
        }
        
        case 7:
        {  
            long long giaxe;
            int nam;
            const double lainam = 0.072; // 7.2% mot nam
            
            printf("Gia tri xe: ");
            scanf("%lld", &giaxe);
            
            printf("Thoi han vay (nam): ");
            scanf("%d", &nam);
            
            printf("Lai suat co dinh: %.1lf%%\n", lainam * 100);

            // Nhập phần trăm vay
            int phantramvay;
            do {
                printf("Nhap phan tram ban muon vay (0-100): ");
                scanf("%d", &phantramvay);
                if (phantramvay < 0 || phantramvay > 100) {
                    printf("SO KHONG HOP LE!! VUI LONG NHAP LAI.\n");
                }
            } while (phantramvay < 0 || phantramvay > 100);

            // Tính toán
            double tilevay = phantramvay / 100.0;
            long long tienvay = giaxe * tilevay;
            long long sotientratruoc = giaxe - tienvay;

            // Tính số tiền tháng và số tháng vay
            double laithang = lainam / 12;
            int sothang = nam * 12;

            // Tính số tiền trả hàng tháng 
            double tientrahangthang;
            if (laithang > 0) {
                double heso = pow(1 + laithang, sothang);
                tientrahangthang = tienvay * (laithang * heso) / (heso - 1);
            }
            else {
                tientrahangthang = (double)tienvay / sothang;
            }

            // Hien thi ket qua
            printf("\n=== KET QUA ===\n");
            printf("1. So tien tra truoc: %lld VND\n", sotientratruoc);
            printf("2. So tien vay: %lld VND\n", tienvay);
            printf("3. So tien tra hang thang: %.0lf VND\n", tientrahangthang);
            printf("4. Thoi ki vay: %d thang\n", sothang);

            // Tinh tong
            double tongtragop = tientrahangthang * sothang;
            double tonglai = tongtragop - tienvay;
            double tongtientra = sotientratruoc + tongtragop;

            printf("Tong so tien phai tra gop: %.0lf VND\n", tongtragop);
            printf("Tong lai phai tra: %.0lf VND\n", tonglai);
            printf("Tong tien phai tra: %.0lf VND\n", tongtientra);
            printf("Chenh lech so voi gia xe: %.0lf VND\n", tongtientra - giaxe);
            
            break;
        }
        
        case 8:
        {
            int n;
            int i;  // Khai báo biến để chạy
            printf("Nhap so luong sinh vien: ");
            scanf("%d", &n);         
            char Hoten[50][100];  // Khai báo mảng song song
            float Diem[10];
            char Hocluc[20][100];
                
                // Nhập thông tin sinh viên
                for (i = 0; i < n; i++) {
                    printf("\nNhap thong tin Sinh Vien %d:\n", i + 1);
                    printf("Nhap Diem: ");
                    scanf("%f", &Diem[i]);
                    // Xoa bo nho dem truoc khi nhap chuoi
                    while((getchar()) != '\n'); 
                    printf("Nhap Ho ten: ");
                    fgets(Hoten[i], sizeof(Hoten[i]), stdin); 
                    Hoten[i][strcspn(Hoten[i], "\n")] = 0;
                }

                 //1. Xếp loại học lực của sinh viên
                for (i=0; i<n; i++){
                   if (Diem[i]>=9.0)
                      strcpy(Hocluc[i], "Xuat sac");
                   else if (Diem[i]>=8.0)
                      strcpy(Hocluc[i], "Gioi");
                   else if (Diem[i]>=6.5)
                      strcpy(Hocluc[i], "Kha");
                    else if (Diem[i]>=5.0)
                      strcpy(Hocluc[i], "Trung Binh");
                    else if (Diem[i]<5.0)
                      strcpy (Hocluc[i], "Kem");
                }


                // 2. sắp xếp giảm dần theo điểm (Thuat toan Bubble Sort)
                for (int j = 0; j < n - 1; j++) {
                    for (int k = j + 1; k < n; k++) {
                        if (Diem[j] < Diem[k]) {
                            // Doi cho Diem
                            float tempDiem = Diem[j];
                            Diem[j] = Diem[k];
                            Diem[k] = tempDiem;
                            
                            // Doi cho Ten
                            char tempTen[50];
                            strcpy(tempTen, Hoten[j]);
                            strcpy(Hoten[j], Hoten[k]);
                            strcpy(Hoten[k], tempTen);
                            
                            // Doi cho Hoc luc
                            char tempHL[20];
                            strcpy(tempHL, Hocluc[j]);
                            strcpy(Hocluc[j], Hocluc[k]);
                            strcpy(Hocluc[k], tempHL);
                        }
                    }
                }

                // Xuất thông tin sinh viên
                printf("\n--- DANH SACH SINH VIEN ---\n");
                for (i = 0; i < n; i++) {
                    printf("Ho ten: %-20s | Diem: %-5.1f | Hoc luc: %s\n", Hoten[i], Diem[i], Hocluc[i]);
                }
                break;
            }

        case 9:
            printf("9. Chuc nang xay dung game FPOLY-LOTT\n");
            break;

        case 10:
            printf("Chuc nang dang phat trien...\n");
            break;

        case 0:
            printf("Tam biet!\n");
            break;
        default:
            printf("Chuc nang khong ton tai. Vui long chon lai!\n");
        }

    } while (choice != 0);
    return 0;
    }

