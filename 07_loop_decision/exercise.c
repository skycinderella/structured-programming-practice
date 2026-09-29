#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;            //running total of the multiples of 7, starts with 0
    int count = 0;          //counter: how many multiples of 7 we found

    //Loop through every number from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        //Decision: is i a multiple of 7?
        if (i % 7 == 0)
        {
            sum = sum + i;      //add it to the running total
            count++;            //count this multiple
        }
    }

    //Display the results
    printf("Multiples of 7 found: %d\n", count);
    printf("Sum of multiples of 7 from 1 to 100 is %d\n", sum);

    return 0;
}
