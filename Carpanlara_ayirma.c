#include <stdio.h>

int main() {

    int sayi;
    printf("Carpanlarini gormek istediginiz sayiyi girin: ");
    scanf("%d",&sayi);
    
    for (int i = 2; sayi>1; i++){
        while (sayi%i == 0){

            printf("%d ",i);
            sayi = sayi / i ;

        }
 }
return 0;
    }



