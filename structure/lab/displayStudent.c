#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to display a student's details
void displayStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);
}

int main() {
    struct Student student1;

    // Asking user for student details
    printf("Enter Roll Number: ");
    scanf("%d", &student1.rollNumber);

    // Clear input buffer
    getchar(); // To consume leftover newline

    printf("Enter Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0'; // Remove newline

    printf("Enter Marks: ");
    scanf("%f", &student1.marks);

    // Display student details using the function
    displayStudent(student1);

    return 0;
}