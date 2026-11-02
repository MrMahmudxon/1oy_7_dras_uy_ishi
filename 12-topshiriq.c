#include <stdio.h>

int main() {
    int n, boshlangich;
  printf("sonni kiriting:  ");
  scanf("%d", &n);
  
  boshlangich=n;
  printf("Boshlangich son: %d\n", boshlangich);
  ++n;
  ++n;
  ++n;
  printf("3 marta oshirilgandan keyin: %d\n", n);
  n=boshlangich;
  --n;
  --n;
  printf("2 marta kamaytirilgandan keyin keyin: %d\n", n);
  
    return 0;

}