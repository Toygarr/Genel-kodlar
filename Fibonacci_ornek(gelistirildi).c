#include <stdio.h>

int A,B,C,i,n;

int main (){

    A=1; B=1; 
    int n;
    printf("Kacinci Fibonacci elemanina kadar bakmak istersiniz? : ");
    scanf("%d'ye kadar olan, 2'ye bolunebilen dizi elemanları bunlardir.",&n);

    
    for (i=2; i<n; i++){

        C=A+B;
        A=B;
        B=C;
        if(C%2==0)
            printf("%d\n",C);
    }

    return 0 ;
}