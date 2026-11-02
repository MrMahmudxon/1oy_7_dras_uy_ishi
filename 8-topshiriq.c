#include <stdio.h>

int main() {
    int n,  yil, hafta, qoldiq ;
    printf("sonni kiriting: ");
  scanf( "%d", &n);
  yil=n/365;
  qoldiq=n%365;
  hafta=qoldiq/7;
  qoldiq= qoldiq%7;
  printf("yil: %d\n", yil);
  printf("hafta: %d\n", hafta);
  printf("qolgan kun: %d\n", qoldiq);
 
    
  
    return 0;

}