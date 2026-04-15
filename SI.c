#include <stdio.h>

int main() {
    float p, t, r, si;

    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100;

    printf("SI = %f", si);

    return 0;
}