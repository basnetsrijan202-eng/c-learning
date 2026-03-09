#include <stdio.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];  // Array of 5 students
    int i;

    // Input student details
    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To read string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display student details
    printf("Student Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("---------------------------------\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
