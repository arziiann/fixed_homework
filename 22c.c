#include <stdio.h>


int main()
{   
    
    char arr[] = "CheeseBurger";

    for(int i = 0; i < sizeof(arr) - 1; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e'|| arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'Y')
        {
            printf("%c\n", arr[i]);    
        }

    }
}    
