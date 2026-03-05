#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Food {
    int id;
    char name[50];
    float price;
    int quantity;
};

struct Food foodList[MAX];
int count = 0;

// Function to add food item
void addFood() {
    if(count >= MAX) {
        printf("Food list is full!\n");
        return;
    }

    printf("\nEnter Food ID: ");
    scanf("%d", &foodList[count].id);

    printf("Enter Food Name: ");
    scanf(" %[^\n]", foodList[count].name);

    printf("Enter Price: ");
    scanf("%f", &foodList[count].price);

    printf("Enter Quantity: ");
    scanf("%d", &foodList[count].quantity);

    count++;
    printf("Food added successfully!\n");
}

// Function to display food items
void displayFood() {
    if(count == 0) {
        printf("\nNo food items available!\n");
        return;
    }

    printf("\n--- Food List ---\n");
    for(int i = 0; i < count; i++) {
        printf("\nID: %d", foodList[i].id);
        printf("\nName: %s", foodList[i].name);
        printf("\nPrice: %.2f", foodList[i].price);
        printf("\nQuantity: %d\n", foodList[i].quantity);
    }
}

// Function to search food item
void searchFood() {
    int id, found = 0;

    printf("\nEnter Food ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(foodList[i].id == id) {
            printf("\nFood Found!");
            printf("\nName: %s", foodList[i].name);
            printf("\nPrice: %.2f", foodList[i].price);
            printf("\nQuantity: %d\n", foodList[i].quantity);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Food not found!\n");
    }
}

// Function to delete food item
void deleteFood() {
    int id, found = 0;

    printf("\nEnter Food ID to delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(foodList[i].id == id) {
            for(int j = i; j < count - 1; j++) {
                foodList[j] = foodList[j + 1];
            }
            count--;
            printf("Food deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Food not found!\n");
    }
}

int main() {
    int choice;

    while(1) {
        printf("\n===== Food Management System =====\n");
        printf("1. Add Food\n");
        printf("2. Display Food\n");
        printf("3. Search Food\n");
        printf("4. Delete Food\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addFood();
                break;
            case 2:
                displayFood();
                break;
            case 3:
                searchFood();
                break;
            case 4:
                deleteFood();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}