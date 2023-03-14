#include <stdio.h>

/*
i j  i j  i j
0 0  0 1  0 2
1 0  1 1  1 2
2 0  2 1  2 2
*/

int main()
{

	int num = 0;
	scanf("%i", &num);
	
	for(int i = 0; i < num; i++)
	{
		for(int j = 0; j < num; j++)
		{
			if(i == 0 || i == num - 1 || j == 0 || j == num - 1)
			{
				printf("* ");
			}
			
			else
			{
				printf("  ");
			}
		
        }

		
		printf("\n");

	}

}
