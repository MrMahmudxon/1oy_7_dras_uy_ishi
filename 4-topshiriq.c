#include <stdio.h>

int main() {
    int narx,  foiz,  chegirma, yakuniy ;
    printf("savdo narxini kiriting: ");
  scanf( "%d", &narx);
    printf("chegirma foizini kiriting:  ");
    scanf("%d",  &foiz);
    chegirma= narx*foiz/100;
   yakuniy=narx-chegirma;
    printf("Chegirma:  %.d\n", chegirma);
    printf("Yakuniy narx: %.d\n", yakuniy);
       
    return 0;

}