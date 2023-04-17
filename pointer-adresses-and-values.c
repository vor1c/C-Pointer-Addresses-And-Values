#include <stdio.h>

int main() {
int number = 7; // Initializing the number variable
int *pointer = &number; // Setting a pointer to tprintf("Address of the number variable: %p\n", &number); // Printing the address of the number variable
printf("Value of the number variable: %d\n", number); // Printing the value of the number variable
printf("Address of the pointer variable: %p\n", &pointer); // Printing the address of the pointer variable
printf("Address that the pointer is pointing to: %p\n", pointer); // Printing the address that the pointer is pointing to
printf("Value at the address the pointer is pointing to: %d\n", *pointer); // Printing the value at the address the pointer is pointing to

return 0;
}