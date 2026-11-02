#include <stdio.h>
#include <math.h>
int main() {
    float a, S, V;
    printf("kubni uzunligini kiriting: ");
  scanf( "%f", &a);
  V=pow(a , 3);
  S=6*pow(a, 2);
  printf("Kub hajmi:  %.0f\n", V);
  printf("Sirt yuzasi: %.0f\n", S);
  
   
       
    return 0;

}