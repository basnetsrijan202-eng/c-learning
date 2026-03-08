#include <stdio.h>

union StudentID {
    long dlNumber;
    long citizenshipNumber;
    long passportNumber;
};

int main() {
    union StudentID id;
    int choice;

    printf("Choose the type of ID to store:\n");
    printf("1. Driving License Number\n");
    printf("2. Citizenship Number\n");
    printf("3. Passport Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Driving License Number: ");
        scanf("%ld", &id.dlNumber);
        printf("Stored DL Number: %ld\n", id.dlNumber);
    }
    else if (choice == 2) {
        printf("Enter Citizenship Number: ");
        scanf("%ld", &id.citizenshipNumber);
        printf("Stored Citizenship Number: %ld\n", id.citizenshipNumber);
    }
    else if (choice == 3) {
        printf("Enter Passport Number: ");
        scanf("%ld", &id.passportNumber);
        printf("Stored Passport Number: %ld\n", id.passportNumber);
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}