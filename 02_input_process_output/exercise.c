#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    //Prompt user and read the 2 integers
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    //Perform calculations
    int sum = a + b;
    int prdt = a * b;
    int diff = a - b;
    int qnt = a / b;
    int rem = a % b;

    //Display results
    printf("The sum is %d\n", sum);
    printf("The product is %d\n", prdt);
    printf("The difference is %d\n", diff);
    printf("The quotient is %d\n", qnt);
    printf("The remainder is %d\n", rem);

    return 0;
}
