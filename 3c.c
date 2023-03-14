#include <stdio.h>


int main()
{
	int a = 0;
	int count = 0;
	scanf("%i", &a);
	if(a > 12)
	{
		while(a != 0)
		{	
			count = a % 10;
			a = a / 10;
			
			printf("%i", count);
		}

	}
}
