#include <stdio.h>

int A,i,carpim=1;

int main(){

    printf("Bir sayi giriniz: ");
    scanf("%d",&A);

    for (i=A;i>0;i--) {

        carpim = carpim * i; 
    }

    printf("%d'nin faktoriyeli %d'dir\n",A,carpim);

    return 0;
}