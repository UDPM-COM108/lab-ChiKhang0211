#include <stdio.h>

int main() {
    int n;
    int i, j, temp;
   
    //#BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
    int tong = 0;
    int dem = 0;
    
    for (i = 0; i < n; i++) {
        if (a[i] % 3 == 0) { // Kiem tra chia het cho 3
            tong = tong + a[i]; // Cong vao tong
            dem++;              // Tang bien dem len 1
        }
    }

    printf("\n--- KET QUA BAI 1 ---\n");
    if (dem > 0) {
        // Ep kieu float de ket qua ra so thap phan
        float trungBinh = (float)tong / dem;
        printf("Trung binh tong cac so chia het cho 3 la: %.2f\n", trungBinh);
    } else {
        printf("Trong mang khong co so nao chia het cho 3.\n");
    }

    // --- BAI 2: TIM MAX VA MIN ---
    int max = a[0];
    int min = a[0];

    for (i = 1; i < n; i++) { // Duyet tu phan tu thu 2 tro di
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("\n--- KET QUA BAI 2 ---\n");
    printf("Gia tri lon nhat (Max): %d\n", max);
    printf("Gia tri nho nhat (Min): %d\n", min);

    // --- BAI 3: SAP XEP GIAM DAN ---
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) { // Neu so truoc nho hon so sau thi doi cho
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n--- KET QUA BAI 3 ---\n");
    printf("Mang sau khi sap xep giam dan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}