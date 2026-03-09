#include <stdio.h>
union StudentID {
    int passportNumber;
    int id;
    int citizenID;
};
int main() {
    union StudentID student;
    student.passportNumber = 555555;
    printf("Passport Number: %d\n", student.passportNumber);

    student.id = 123456;
    printf("Student ID: %d\n", student.id);

    student.citizenID = 987654321;
    printf("Citizen ID: %d\n", student.citizenID);
    printf("After setting Citizen ID, Passport Number: %d\n", student.passportNumber);
    printf("After setting Citizen ID, Student ID: %d\n", student.id);
    printf("After setting Citizen ID, Citizen ID: %d\n", student.citizenID);
     return 0;
}