#include <stdio.h>

int main() {
    float   km, yonilgi, ortacha;
    printf("yurgan km ni kiriting: ");
  scanf( "%f", &km);
  printf("sariflangan yonilg'i ni kiriting: ");
  scanf( "%f", &yonilgi);
  ortacha=yonilgi*100/km;
  printf("o'rtacha sarflangan yonilg'i: %.2f\n", ortacha);
  
 
    
  
    return 0;

}