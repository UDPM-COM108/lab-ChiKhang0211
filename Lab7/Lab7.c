#include <stdio.h>
#include <string.h>

//#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI
void dem_nguyen_phu_am() {
    char s[100];
    int i = 0, n = 0, p = 0;
    printf("\n--- BAI TAP 1: DEM NGUYEN AM ---\n");
    printf("Xin moi nhap vao chuoi: ");
    scanf("%s", s);
    
    while(s[i] != '\0') {
        if(s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='a' || s[i]=='i' ||
           s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='U' || s[i]=='O'){
            n++;
        } else {
            p++;
        }
        i++;
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, n, p);
}

//#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
/*void checklogin(char user[100], int pass){
    char userSys[] = "admin";
    int passSys = 12345;
    if(strcmp(user, userSys) == 0 && pass == passSys){
        printf("\nDang nhap thanh cong!!!\n");
    } else {
        printf("\nDang nhap that bai!!!\n");
    }
}*/

int main(){
    dem_nguyen_phu_am();
    
    char user[100];
    int pass;
    
    /*printf("\n--- BAI TAP 2: LOGIN ---\n");
    printf("Mac dinh username va password la: admin va 12345\n");
    
    printf("Nhap username: ");
    scanf("%s", user); 
    
    printf("Nhap password: ");
    scanf("%d", &pass);

    checklogin(user, pass);*/
    
    return 0;
}