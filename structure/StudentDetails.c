#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student1 = {101, "Srijan Basnet", 87.5};
    printf("Student Details:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}