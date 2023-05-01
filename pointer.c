#include <stdio.h>
int main()
{
 int* pc, c;
 c = 22;
 printf("Address of c: %u\n", &c);
 printf("Value of c: %d\n\n", c);
 pc = &c;
 printf("Address of pointer pc: %u\n", pc);
 printf("Content of pointer pc: %d\n\n", *pc);
 c = 11;
 printf("Address of pointer pc: %u\n", pc);
 printf("Content of pointer pc: %d\n\n", *pc);
 *pc = 2;
 printf("Address of c: %u\n", &c);
 printf("Value of c: %d\n\n", c);
 return 0;
}

/*

This is a C program that demonstrates the use of pointers.
The code begins by declaring an integer variable "c" and a pointer to an integer "pc".
The variable "c" is assigned a value of 22.

The program then prints the address of "c" using the "&" operator and the format specifier "%u" for an unsigned integer.
It also prints the value of "c" using the format specifier "%d" for a decimal integer.

Next, the pointer "pc" is assigned the address of "c" using the "&" operator.
The program then prints the address of "pc" and the content of "pc" using the "*" operator to dereference the pointer.

The value of "c" is then changed to 11, and the program prints the address of "pc" and the content of "pc" again.
Since the pointer "pc" is still pointing to the same memory location, the content of "pc" remains the same as before,
even though the value of "c" has changed.

Finally, the program sets the content of "pc" to 2 by dereferencing it and assigning a new value.
It then prints the address of "c" and the value of "c" again. Since "pc" points to the memory location of "c",
changing the content of "pc" also changes the value of "c".

In summary, this program demonstrates the use of pointers to manipulate values in memory,
as well as how changing the content of a pointer can affect the value of a variable.

*/
