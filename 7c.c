#include <stdlib.h>
#include "functions.h"

int main ()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int sum = 0; 

	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	
	int poqr = ereq_poqr(x, y, z);
	for (int i = 1; i <= poqr; i++)
	{
		if (x % i == 0 && y % i == 0 && z % i == 0)
		sum = i;	
	}
	
	printf("%i", sum);
	return 0;
}
