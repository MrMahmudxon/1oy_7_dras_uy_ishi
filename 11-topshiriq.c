#include <stdio.h>

int main() {
    int n, minglik, yuzlik, onlik, birlik, y;
  printf("to'rt xonali son kiriting:  ");
  scanf("%d", &n);
  minglik=(n/1000)%10;
  yuzlik=(n/100)%10;
  onlik=(n/10)%10;
  birlik=n%10;
  y= minglik+yuzlik+onlik+birlik;
  printf("minglik: %d\n", minglik);
  printf("yuzlik: %d\n", yuzlik);
   printf("o'nlik: %d\n", onlik);
  printf("birlik: %d\n", birlik);
  printf("yig'indi natijasi: %d+%d+%d+%d=%d\n",minglik, yuzlik, onlik, birlik, y);
  
    
    
 
    
  
    return 0;

}