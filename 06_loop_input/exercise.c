#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;              //how many numbers the user will enter
    int value;              //holds each number as it is read
    int sum = 0;            //running total, starts at 0
    double average;         //sum divided by count

    //Ask how many numbers will be entered
    printf("How many numbers do you want to enter?: ");
    scanf("%d", &count);

    //Only continue if the count makes sense (avoids dividing by zero)
    if (count > 0)
    {
        //Repeat once for each number the user wants to enter
        for (int i = 1; i <= count; i++)
        {
            //Read one number per pass through the loop
            printf("Enter number %d: ", i);
            scanf("%d", &value);

            //Add it to the running total
            sum = sum + value;
        }

        //Divide as decimals so the average keeps its decimal part
        average = (double) sum / count;

        //Display the results
        printf("Sum is %d\n", sum);
        printf("Average is %.2f\n", average);
    }
    else
    {
        printf("Please enter a count greater than 0.\n");
    }

    return 0;
}
