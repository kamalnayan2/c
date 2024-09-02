// C program for a simple calculator
#include <stdio.h>
#include <math.h>

int main()
{
    char op; // operator
    double x, y; // operands
    double ans; // answer

    printf("Welcome to the simple calculator!\n");
    printf("Enter an operator (+, -, *, /, ^) or q to quit: ");
    scanf("%c", &op);

    while (op != 'q') // loop until user enters q
    {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &x, &y);

        switch (op)
        {
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            if (y == 0)
            {
                printf("Error: division by zero\n");
                continue; // skip the rest of the loop
            }
            ans = x / y;
            break;
        case '^':
            ans = pow(x, y);
            break;
        default:
            printf("Error: invalid operator\n");
            continue; // skip the rest of the loop
        }

        printf("%.2lf %c %.2lf = %.2lf\n", x, op, y, ans); // print the answer

        printf("Enter an operator (+, -, *, /, ^) or q to quit: ");
        scanf(" %c", &op); // notice the space before %c
    }

    printf("Thank you for using the simple calculator!\n");
    return 0;
}
