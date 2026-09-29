#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit;              //the number entered by the user
    int sum = 0;            //running total of numbers
    int sum_squares = 0;    //running total of squares
    int sum_cubes = 0;      //running total of cubes

    //Prompt the user for the upper limit
    printf("Enter a number: ");
    scanf("%d", &limit);

    //Loop through all natural numbers from 1 to limit
    for (int i = 1; i <= limit; i++)
    {
        sum = sum + i;                              //add i to the running sum
        sum_squares = sum_squares + (i * i);        // add i squared
        sum_cubes = sum_cubes + (i * i * i);        //add i cubed
    }

    //Display the results
    printf("The sum is %d\n", sum);
    printf("The sum of squares is %d\n", sum_squares);
    printf("The sum of cubes is %d\n", sum_cubes);

    return 0;
}
