#include <stdio.h>
#include <math.h>

// Khai báo nguyên mẫu hàm
void kiemtrasonguyen();

//Chức năng 1
void kiemtrasonguyen() {
    printf("\n>>> Ban da chon Chuc nang so 1 <<<\n");
    int x, i, count = 0;
    
    printf("Nhap x: ");
    scanf("%d", &x);
    if (x == (int)x) {
        printf("\n%d la so nguyen", x);
        if (x < 2) {
            printf("\n%d khong phai so nguyen to", x);
        } else {
            for (i = 2; i <= sqrt(x); i++) {
                if (x % i == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                printf("\n%d la so nguyen to", x);
            } else {
                printf("\n%d khong phai so nguyen to", x);
            }
        }
        int flag = 0;
        for (i = 1; i * i <= x; i++) {
            if (i * i == x) {
                printf("\n%d la so chinh phuong", x);
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
             printf("\n%d khong phai so chinh phuong", x);
        }
    }
    printf("\n"); // Xuống dòng cho đẹp
}


int main() {
    int choice;
    do {
        printf("\n-----ASM1 cua Van Chi Khang PS49634-----\n");
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

        switch(choice) {
            case 1: 
                kiemtrasonguyen(); 
                break; 

            case 2: 
                printf("2. Tim uoc so chung va boi so chung cua 2 con so\n"); 
                break;

            case 3: 
                printf("3. Chuc nang tinh tien cho quan karaoke\n"); 
                break;

            case 4: 
                printf("4. Chuc nang tinh tien dien\n"); 
                break;

            case 5: 
                printf("5. Chuc nang doi tien\n"); 
                break;

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
                printf("10. Chuc nang tinh toan phan so\n"); 
                break;

            case 0: 
                printf("Thoat...\n"); 
                break;

            default: 
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);
    
    return 0;
}