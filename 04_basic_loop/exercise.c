#include <stdio.h>
#include <stdlib.h>

int main()
{
    //loop counter, whole-number celsius values
    int cel;

    //Print table header
    printf("Celsius\tFahrenheit\n");

    //Loop from Celsius 30 to 50, converting each to Fahrenheit
    for (cel = 30; cel <= 50; cel++)
    {
        //Convert using the formula: F = (9/5)C + 32
        //9.0 and 5.0 force floating-point division (not integer division)
        double fahrenheit = (9.0 / 5.0) * cel + 32;

        //Print the pair, Fahrenheit rounded to 1 decimal place
        printf("%d\t%.1f\n", cel, fahrenheit);
    }

    return 0;
}
