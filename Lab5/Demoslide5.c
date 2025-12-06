#include <stdio.h>
#include <math.h>

//Dinh nghia ham
void giatrilonnhat(int a, int b);
float gia_tri_nhonhat(int a, int b);

//Tao ham gia tri lon nhat
void giatrilonnhat(int a, int b){

}
int main(){
    double a = -5;
    double b = 10;
    double c = 15;
    giatrilonnhat(a,b);
    /*int max = a;
    if(b>max) max=b;
    if(c>max) max=c;

    int min =a;
    if ( b < min)  min=b;
    if( c < min) min=c;*/
    printf ("Gia tri lon nhat la: max=%lf", fmax(a,b));
    printf ("Gia tri nho nhat la: min=%lf\n", fmin(b,c));
    int x = abs(a);
    printf("Gia tri tuyet doi cua a:%d\n",x);
    return 0;
}

