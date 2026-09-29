 # structured-programming-practice

 CSC1101 Structured Programming - GitHub Practice Assignment. Eight small C programs demonstrating core programming structures: output, input/processing, decisions, and loops.

## Exercise 1 - Basic Output

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.3 (parts e-h)

Note: The textbook exercise asks for individual statements; I combined ideas from several parts into one complete program.

What the program does: Displays the message "This is a C program." using several formatting variations - on one line, split across two lines, with each word on its own line, and with tab-separated words.

Concepts used: printf(), escape sequences (\n, \t).

How it works: The program calls printf() four times, each demonstrating a different way to control line breaks and spacing using \n and \t inside the format string.

Example run:
```
This is a C program.
This is a C
program.
This
is
a
C
program.
This    is    a    C    program.
```

## Exercise 2 - Input, Process, Output

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.16.

What the program does: Reads two integers from the user and displays their sum, product, difference, quotient, and remainder.

Concepts used: variables, scanf(), arithmetic operators (+, -, *, /, %).

How it works: Two integers are read one at a time using scanf(). Each arithmetic operation is performed and stored in its own variable, then all five results are printed using printf().

Example run:
```
Enter the first integer: 20
Enter the second integer: 6
The sum is 26
The product is 120
The difference is 14
The quotient is 3
The remainder is 2
```

## Exercise 3 - Decision

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 2, Exercise 2.22.

What the program does: Reads an integer and determines whether it is odd or even.

Concepts used: if/else, the remainder operator (%).

How it works: The program checks whether number % 2 equals 0. If it does, the number is even; otherwise, it is odd.

Example run:
```
Enter the integer: 8
The integer, 8 is even.
```

## Exercise 4 - Basic Loop

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.10.

What the program does: Converts temperatures from 30C to 50C into Fahrenheit and prints them as a table.

Concepts used: for loop, double, arithmetic.

How it works: A for loop runs from 30 to 50. On each pass, the Celsius value is converted to Fahrenheit using the formula F = (9/5)C + 32, and both values are printed side by side.

Example run:
```
Celsius	Fahrenheit
30	86.0
31	87.8
...
50	122.0
```

## Exercise 5 - Loop with Calculation

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.13.

What the program does: Calculates the sum, sum of squares, and sum of cubes of all natural numbers from 1 to a number entered by the user.

Concepts used: for loop, accumulators, arithmetic.

How it works: The program reads a limit from the user, then loops from 1 to that limit. On each pass, it adds the current number, its square, and its cube to three separate running totals.

Example run:
```
Enter a number: 4
The sum is 10
The sum of squares is 30
The sum of cubes is 100
```

## Exercise 6 - Loop with User Input

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.9.

What the program does: Sums a sequence of integers entered by the user and calculates their average. The first value entered specifies how many numbers will follow.

Concepts used: for loop, scanf() inside a loop, accumulators, type casting.

How it works: The program reads a count first, then loops that many times, reading one number per pass and adding it to a running total. After the loop, the sum is divided by the count (cast to double) to get the average.

Example run:
```
How many numbers do you want to enter? 4
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Sum is 100
Average is 25.00
```

## Exercise 7 - Loop with Decision

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.11.

What the program does: Calculates and prints the sum of all multiples of 7 from 1 to 100.

Concepts used: for loop, if statement, the remainder operator (%), counters.

How it works: The program loops through every number from 1 to 100. On each pass, it checks whether the number is a multiple of 7 using the remainder operator. If it is, the number is added to a running total and a counter is increased.

Example run:
```
Multiples of 7 found: 14
Sum of multiples of 7 from 1 to 100 is 735
```

## Exercise 8 - Interactive Console Program

Source: Deitel & Deitel, C How to Program (9th Edition), Chapter 4, Exercise 4.28.

What the program does: Calculates weekly pay for employees of four different types (manager, hourly, commission, pieceworker), repeating for as many employees as the user wants to enter, until a sentinel value of -1 is entered.

Concepts used: while loop (sentinel-controlled), switch statement, if/else, double, menu-driven interaction.

How it works: The program repeatedly displays a menu of pay codes and reads the user's choice. A switch statement selects the correct pay formula based on the code entered, asking for the specific details needed for that employee type. An if/else inside the hourly case handles overtime pay. The loop continues until the user enters -1 to quit.

Example run:
```
Pay codes: 1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker
Enter pay code (-1 to quit): 2
Enter hours worked: 45
Enter hourly wage: 10
Weekly pay is $475.00

Enter pay code (-1 to quit): 3
Enter gross weekly sales: 1000
Weekly pay is $307.00
Enter pay code (-1 to quit): -1
Program ended.
```
