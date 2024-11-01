// program to print the use of Pointer Arithmetic

#include <stdio.h>

int main()
{
  int v[3] = { 1, 12, 20 };
   int* ptr;
    ptr = v;

for (int i = 0; i < 3; i++)
 {
   printf("Value of *ptr = %d\n", *ptr);

   printf("Value of ptr = %p\n\n", ptr);
   ptr++;
 }
  return 0;
}
