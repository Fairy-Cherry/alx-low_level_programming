#include <stdio.h>

/*
 * n - variable in which number is assigned to
 * return 0
 */

int main(void)
{
	int n;
	
	n = 0;

	if (n < 0)
	{
		printf("%d is negative/n", n);
	}
else if (n > 0)
{
	printf("%d is positive/n", n);
}
else if (n == 0)
{
	printf("%d is zero/n", n);
}

return (0);
}
