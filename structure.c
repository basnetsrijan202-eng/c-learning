#include <stdio.h>
 struct address{
    char street[50];
    char city[50];
    char state[10]; 
 };
    struct student{
        char name[50];
        struct address addr; 
    };
    int main(){
  struct student s1 = {"Anish", {"123 Main St", "Boudha", "KTM"}};
    printf("Name: %s\n", s1.name);
    printf("Street: %s\n", s1.addr.street);
    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);

    return 0;
    }
