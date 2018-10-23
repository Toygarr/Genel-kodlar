#include <stdio.h>

int A,B,C,i;

int main (){
    
    A=1; B=1;
    
    printf("%d\n%d",A,B);
    
    for (i=3; i<20; i++){
        C=A+B;
        A=B;
        B=C;
        if(C%3==0)
            printf("%d\n",C);
    }
   
    return 0 ;
}
