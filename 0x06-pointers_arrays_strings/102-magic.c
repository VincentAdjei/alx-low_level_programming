#include <stdio.h>

/**
*main - Add one line to this code,
* so that the program prints a[2] = 98,
*followed by a new line.
*Return:0 always success
*/
	int main(void)
{
	int a[] = {42, 23, 98, 17};
	int *p = a;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	printf("a[2] = %d\n", *(p + 2));
	return (0);
}
