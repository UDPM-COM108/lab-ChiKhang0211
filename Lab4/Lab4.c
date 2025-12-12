#include <stdio.h>
#include <stdlib.h>

void tinhTrungBinhTongSoChan();
void xacDinhSoNguyenTo();
void xacDinhSoChinhPhuong();

int main() {
    int choice;
    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Tinh trung binh tong cac so tu nhien chia het cho 2\n");
        printf("2. Xac dinh so nguyen to\n");
        printf("3. Xac dinh so chinh phuong\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            tinhTrungBinhTongSoChan();
            break;

        case 2:
            xacDinhSoNguyenTo();
            break;

        case 3:
            xacDinhSoChinhPhuong();
            break;

        case 0:
            printf("Thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le, moi chon lai!\n");
            break;
        }

    } while (choice != 0);

    return 0;
}

void tinhTrungBinhTongSoChan() {
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;
    
    printf("\nBai 1: Tinh trung binh tong cac so tu nhien chia het cho 2\n");
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    
    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }
    
    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh cac so chan: %.2f\n", trungBinh);
    } else {
        printf("Khong co so chan nao!\n");
    }
}

void xacDinhSoNguyenTo() {
    int x, i, count = 0;
    
    printf("\nBai 2: Xac dinh so nguyen to\n");
    printf("Nhap x: ");
    scanf("%d", &x);
    
    count = 0;
    for (i = 2; i < x; i++) {
        if (x % i == 0)
            count++;
    }
    
    if (count == 0 && x > 1)
        printf("%d la so nguyen to\n", x);
    else
        printf("%d khong phai la so nguyen to\n", x);
}

void xacDinhSoChinhPhuong() {
    int x, i, found = 0;
    
    printf("\nBai 3: Xac dinh so chinh phuong\n");
    printf("Nhap x: ");
    scanf("%d", &x);
    
    for (i = 1; i < x; i++) {
        if (i * i == x) {
            printf("%d la so chinh phuong (vi %d * %d = %d)\n", x, i, i, x);
            found = 1;
            break;
        }
    }
    
    if (found == 0)
        printf("%d khong phai la so chinh phuong\n", x);
    
}