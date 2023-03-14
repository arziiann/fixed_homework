#include <stdio.h>

int chors_poqr(int x, int y, int z, int h)
{
	if(x < y && x < z && x < h)
	{
		return x;
	}
	
	else if(y < x && y < z && y < h)
	{
		return y;
	}
	
	else if(z < y && z < x && z < h)
	{
		return z;
	}
	
	else
	{
		return h;
	}

}



int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int h = 0;
		
	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	scanf("%i", &h);
	
	if(x + y + z + h == 0)
	{
		printf("%i", chors_poqr(x, y, z, h));
	}
	else
	{	
		printf("ERROR");
	}
	return 0;
	
}
