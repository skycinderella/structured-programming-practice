#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    //Prompt user and read integer
    printf("Enter the integer: ");
    scanf("%d", &num);

    //Check if integer is even or odd using the remainder operator and display result
    if (num % 2 == 0)
    {
        printf("The integer, %d is even.\n", num);
    }
    else
    {
        printf("The integer, %d is odd.\n", num);
    }

    return 0;
}
