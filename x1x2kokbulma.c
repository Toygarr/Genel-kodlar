#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    float x1,x2;
    float delta;

    printf("Denklemin a'sini giriniz: ");
    scanf("%d", &a);
    printf("Denklemin b'sini giriniz: ");
    scanf("%d", &b);
    printf("Denklemin c'sini giriniz: ");
    scanf("%d", &c);

    delta = b*b -4*b*c;
    x1 = (-b + (delta*(1/2))) /2*a;
    x2 = (-b - (delta*(1/2)) )/2*a;
    printf("Denklemin 1.koku %.2f,ikinci koku %.2f dir\n",x1,x2);

    return 0;
}
