#include <stdio.h>

int main ()
{
	int x = 0;
	int y = 0;
	scanf("%i", &x);
	scanf("%i", &y);
	if (x % y == 0 && y % x == 0)
	{
		printf("bajanvum en");
	}
	
	else 
	{
		printf("noric mutqagreq");
	}
}
