#include <stdio.h>
#include <math.h>

int main(){

    int x,y,z;
    float x1,x2;
    float delta;

    printf("Denklemin x'ini giriniz: ");
    scanf("%d", &x);
    printf("Denklemin y'sini giriniz: ");
    scanf("%d", &y);
    printf("Denklemin z'sini giriniz: ");
    scanf("%d", &z);

    delta = y*y -4*y*z;
    x1 = (-y + (delta*(1/2))) /2*x;
    x2 = (-y - (delta*(1/2)) )/2*x;
    printf("Denklemin 1.koku %.2f,ikinci koku %.2f dir\n",x1,x2);

    return 0;
}