#include <stdio.h>

int main(void)
{
  int x;
  int first[5];
  int *p;

  first[2] = 1024;
  p = &x;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", first[2]);
  return (0);
}
