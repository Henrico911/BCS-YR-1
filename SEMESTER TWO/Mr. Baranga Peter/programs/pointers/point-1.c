#include <stdio.h>
/// @brief 
void main() {
    int a = 12;
    int b = 9;  

    int *p = &a; 
    int *y = &b;

    printf("<-----------Printing the addresses-------------->\n");
    printf("<---------1.--Hexadecimal---------->\n");
    printf("Address of a = %x\n", &a);
    printf("Address of a = %x\n\n", p);

    printf("<---------2.--Unsigned---------->\n");
    printf("Address of a = %u\n", &a);
    printf("Address of a = %u", p);

}