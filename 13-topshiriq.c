#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, d, y;
  printf("birinchi sonni kiriting: ");
  scanf("%d", &a);
  printf("ikkinchi sonni kiriting: ");
  scanf("%d", &b);
  c=pow(a, 2);
  d=pow(b, 3);
  y=c+d;
  printf("birinchi sonni kvadrati:  %d\n",c);
  printf("ikkichi sonni kubi:  %d\n", d);
  printf("natijalar yig'indisi:  %d\n", y);
  return 0;
}