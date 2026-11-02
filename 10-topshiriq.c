#include <stdio.h>

int main() {
    int oylik, yillik, xarajat, daromad;
  printf("oyligingizni yozing: ");
  scanf("%d", &oylik);
  printf("oyik xarajatingizni kiriting: ");
  scanf("%d", &xarajat);
  daromad=oylik-xarajat;
  yillik=daromad*12;
  printf("oylik daromadingiz: %d\n", daromad );
  printf("yillik jamg'armangiz: %d\n", yillik);
  
 
    
  
    return 0;

}