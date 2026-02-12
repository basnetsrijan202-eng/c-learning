#include <stdio.h>

int main() {
    int a = 25;
    int *p = &a;

    printf("value of a = %d\n", a);
    printf("address of a = %p\n", (void*)p);
    printf("value using pointer = %d\n", *p);

    return 0;
}