#include <stdio.h>

int main() {
    int n, onlik, birlik, natija;
    printf("sonni kiriting: ");
  scanf( "%d", &n);
  onlik=n/10;
  birlik=n%10;
  natija=onlik*birlik;
  printf("o'nlik: %d\n", onlik);
  printf("birlik: %d\n", birlik);
  printf("Natija: %d\n", natija);
    
  
    return 0;

}