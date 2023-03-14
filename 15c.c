#include <stdio.h>


int main()
{
    
    int arr[5];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        scanf("%i", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        
    }
    printf("min -> %i \n", min);
    
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max -> %i\n",max);
    printf("sum_max_min -> %i", max + min);
}
