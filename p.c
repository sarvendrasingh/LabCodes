/*
  programme to show how the pointer to integer and pointer to pointer functions
*/
#include<stdio.h>
int main()
{
  int a = 4;
  int *p = &a;
  int **q = &p;
  
  printf("Variable:\n");
  printf("\tvalue : %d\n", a);
  printf("\taddress : %p\n", &a);
  
  printf("Pointer to integer:\n");
  printf("\tvalue : %p\n", p);
  printf("\taddress : %p\n", &p);
  printf("\tvalue of *p : %d\n", *p);
  
  printf("Pointer to pointer:\n");
  printf("\tvalue : %p\n", q);
  printf("\taddress : %p\n", &q);
  printf("\tvalue of *q : %p\n", *q);
  printf("\tvalue of *(*q) : %d\n", *(*q));
  
  return 0;
}
