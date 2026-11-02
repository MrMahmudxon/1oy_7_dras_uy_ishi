#include <stdio.h>

int main() {
    int bs, bd, ts, td;
    int boshlanish, tugash, farq;

    printf("Boshlanish soatini kiriting: ");
    scanf("%d", &bs);

    printf("Boshlanish daqiqasini kiriting: ");
    scanf("%d", &bd);

    printf("Tugash soatini kiriting: ");
    scanf("%d", &ts);

    printf("Tugash daqiqasini kiriting: ");
    scanf("%d", &td);

    boshlanish = bs * 60 + bd;
    tugash = ts * 60 + td;

    farq = tugash - boshlanish;

    printf("Vaqt farqi: %d daqiqa\n", farq);

    return 0;
}