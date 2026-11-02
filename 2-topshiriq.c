#include <stdio.h>

int main() {
    float km, metr, sm;
    printf("masofani kilometrda kiriting: ");
    scanf("%f", &km);
    metr=km*1000;
    sm=km*100000;

    printf("Metr: %.2f\n", metr);
    printf("Santimetr: %.2f\n", sm);
    
    
    return 0;
