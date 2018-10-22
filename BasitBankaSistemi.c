#include <stdio.h>

int main(){
    int islem;
    int bakiye = 5000;
    int tutar;

    printf("ISLEMLER\n1:Para Cekme\n2:Para Yatirma\n3:Havale\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
    
    printf("Islemi seciniz.");
    scanf("%d",&islem);
    
    switch (islem){

        case 1:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Cekilecek Tutar:");
            scanf("%d",&tutar);
            if(tutar>bakiye){
                printf("Bakiye Yetersiz\n");
            }
            bakiye -= tutar;
            printf("Bakiyeniz: %d\n",bakiye);
            break;

        case 2:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Yatirilacak Tutar:");
            scanf("%d",&tutar);
            bakiye += tutar;
            printf("Yeni Bakiyeniz: %d\n",bakiye);
            break;


        case 3:
            printf("Bakiyeniz: %d\n",bakiye);
            printf("Havale Yapilacak Tutar:");
            scanf("%d",&tutar);
            if(tutar>bakiye){
                printf("Bakiye Yetersiz\n");
            }
            bakiye -= tutar;
            printf("Yeni Bakiyeniz: %d\n",bakiye);
            break;


        case 4:
            printf("Bakiyeniz %d\n",bakiye);
            break;

        case 5:
            printf("Kart Iade Edildi.\n");
            break;

        default:

            printf("Bilinmeyen Islem\n");
            break;




    }
    return 0 ;
    }
