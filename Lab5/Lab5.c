#include <stdio.h>

//#Bài 1: Xây dựng chương trình tìm giá trị lớn nhất và nhỏ nhất trong 3 số
void bai1() {
    int a, b, c;
    printf("Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = b;
    if (b < min) min = b;
    if (c < min) min = c;
    
    printf("-> So lon nhat: %d, So nho nhat: %d\n", max, min);
}

//#Bài 2: Xây dựng hàm tính năm thuận
void bai2() {
    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("-> %d La nam nhuan.\n", year);
    } else {
        printf("-> %d Khong phai la nam nhuan.\n", year);
    }
}

//#Bài 3: Xây dựng chương trình kiểm tra các số trong [1,1000] mà các số chia hết cho 5 và 9
void bai3() {
    int number;
    printf("Nhap mot so trong khoang [1, 1000]: ");
    scanf("%d", &number);
    
    if (number < 1 || number > 1000) {
        printf("Loi: So khong nam trong [1, 1000] .\n");
        return; 
    }

    if (number % 5 == 0 && number % 9 == 0) {
        printf("-> %d Chia het cho 5 va 9.\n", number);
    } else {
        printf("-> %d Khong chia het cho 5 va 9.\n", number);
    }
}

int main() {
    int choice;
    do {
        printf("\n=== MENU CHUONG TRINH ===\n");
        printf("1. Tim gia tri lon nhat, nho nhat trong 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Kiem tra so chia het cho 5 va 9\n");
        printf("0. Thoat chuong trinh\n");
        printf("Xin hay chon chuc nang: ");

        if (scanf("%d", &choice) == 0) {
            printf("\nLoi: Vui long nhap so nguyen!\n");
            while(getchar() != '\n');
            choice = -1;
            continue;
        }

        switch (choice) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Ket thuc chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le.\n");
        }
    } while (choice != 0);
    
    return 0;
}
