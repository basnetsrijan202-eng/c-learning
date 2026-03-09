#include <stdio.h>

int main() {
    int num = 10;       // Declare an integer variable
    int *ptr;           // Declare a pointer to integer

    ptr = &num;         // Store the address of num in ptr (address-of operator)

    // Display the value and address
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr stores address: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr); // Dereferencing

    // Modify value using pointer
    *ptr = 20;
    printf("New value of num after modifying via pointer: %d\n", num);

    return 0;
}