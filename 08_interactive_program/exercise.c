#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pay_code;           //menu choice: 1-4 for the employee type, -1 to quit
    double salary;          //manager's fixed weekly salary
    double hours;           //hours worked (hourly workers)
    double wage;            //hourly wage
    double sales;           //gross weekly sales (commission workers)
    double items;           //number of items produced (piece workers)
    double amount_per_item; //money paid per item
    double pay;             //the calculated weekly pay
    int valid_code;         //1 if the pay code was valid, 0 if not

    //Show the menu and read the first choice
    printf("Pay codes: 1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker\n");
    printf("Enter pay code (-1 to quit): ");
    scanf("%d", &pay_code);

    //Sentinel-controlled loop: keeps running until the user enters -1
    while (pay_code != -1)
    {
        pay = 0.0;
        valid_code = 1;

        //Decision: choose the pay formula based on the pay code
        switch (pay_code)
        {
        case 1:     //Manager: fixed weekly salary
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            pay = salary;
            break;

        case 2:     //Hourly worker: time-and-a-half after 40 hours
            printf("Enter hours worked: ");
            scanf("%lf", &hours);
            printf("Enter hourly wage: ");
            scanf("%lf", &wage);
            if (hours > 40)
            {
                //40 normal hours + overtime hours at 1.5 times the wage
                pay = 40 * wage + (hours - 40) * wage * 1.5;
            }
            else
            {
                pay = hours * wage;
            }
            break;

        case 3:     //Commission worker: $250 plus 5.7% of gross sales
            printf("Enter the gross weekly sales: ");
            scanf("%lf", &sales);
            pay = 250 + 0.057 * sales;
            break;

        case 4:     //Pieceworker: fixed amount per item produced
            printf("Enter number of items produced: ");
            scanf("%lf", &items);
            printf("Enter amount paid per item; ");
            scanf("%lf", &amount_per_item);
            pay = items * amount_per_item;
            break;

        default:    //Any other number is not a valid pay code
            printf("Invalid pay code.\n");
            valid_code = 0;
            break;
        }

        //Only display pay if the pay code was valid
        if (valid_code == 1)
        {
            printf("Weekly pay is $%.2f\n", pay);
        }

        //Ask for the next employee (this is what the loop condition checks)
        printf("\nEnter pay code (-1 to quit): ");
        scanf("%d", &pay_code);
    }

    printf("Program ended.\n");

    return 0;
}
