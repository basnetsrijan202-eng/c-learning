#include<stdio.h>
int main(){
    int a = 25;
    int *p =&a;
    printf("value of a = %d\n",a);
    printf("asddtess of a = %p\n",p);
    printf("value using pointer = %d\n" ,*p);
    return 0;
}