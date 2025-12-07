#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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

        switch (choice)
        {
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
            printf("\n>>> Ban da chon chuc nang so 2 <<<\n");
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
        printf("\nBan da chon Chuc nang 3\n");
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
    printf("\n"); // Xuống dòng cho đẹp
    }
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

            printf("Hoa don tam tinh (theo code cu): %.0f\n", bill);
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
            printf("6. Chuc nang tinh lai vay ngan hang vay tra gop\n");
            break;
        
        case 7:
            printf("7. Chuc nang tinh tien mua xe\n");
            break;
        
        case 8:
            printf("8. Chuc nang sap xep thong tin sinh vien\n");
            break;

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

