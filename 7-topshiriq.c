#include <stdio.h>

int main() {
    int n, onlik, birlik, yuzlik, natija;
    printf("sonni kiriting: ");
  scanf( "%d", &n);
  onlik=(n/10)%10;
  birlik=n%10;
  yuzlik=n/100;
  natija=birlik*100+onlik*10+yuzlik;
  printf("o'nlik: %d\n", onlik);
  printf("birlik: %d\n", birlik);
  printf("yuzlik: %d\n", birlik);
  printf("Natija: %d\n", yuzlik);
    
  
    return 0;

}