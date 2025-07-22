
#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);

void print_menu();

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n\n____________________________");
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the following options: ");
    printf("\n 1. Addition");
    printf("\n 2. Subtract");
    printf("\n 3. Multiply");
    printf("\n 4. Divide");
    printf("\n 5. Modulus");
    printf("\n 6. Power");
    printf("\n 7. Exit");
    printf("\n Now, enter your choice: ");
}

int main()
{
    int choice;
    double first, second, result;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu Choice");
            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("Now, enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: // Add
            result = first + second;
            break;
        case 2: // Subtract
            result = first - second;
            break;
        case 3: // Multiply
            result = first * second;
            break;
        case 4: // Divide
            result = division(first, second);
            break;
        case 5: // Modulus
            result = modulus((int)first, (int)second);
            break;
        case 6: // Power
            result = pow(first, second);
            break;
        }

        if (!isnan(result))
        {
            printf("\nResult of operation is: %.2f ", result);
        }
    }

    return 0;
}
