#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};   // declaration and initialization
    int i;

    printf("Elements of the array are:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);   // displaying elements
    }

    return 0;
}