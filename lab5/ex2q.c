// Change the value of a pointer through a pointer to a pointer.
//  Then change the value pointed by the pointed pointer as well!

#include <stdio.h>

int main()
{
	int num = 9;

	int *p = &num; // p is pointing to num

	printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);

	*p = 5;

	printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);

	int **pp = &p;

	printf("num: %d, p: %d, pp: %d, &num: %d, *p: %d, **pp: %d\n", num, p, pp, &num, *p, **pp);

	**pp = 3;

	printf("num: %d\n", num);

}
