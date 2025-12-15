#include <stdio.h>

int main()
{
    int choice;
    float num, result;

    while (1)
    {
        printf("\n....Calculator Menu.....\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulo (%%)\n");
        printf("6. Percentage\n");
        printf("7. Find Odd or Even number\n");
        printf("0. Exit code\n");

        printf("Choose an option : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting Calculator...\n");
            break;
        }
        else if (choice < 0 || choice > 7)
        {
            printf("Error! Invalid option. Try again.\n");
            continue;
        }

        if(choice == 5) {
            int a, b;

            printf("Enter The 1st number : ");
            scanf("%d", &a);

            printf("Enter the second number : ");
            scanf("%d", &b);

            result = a % b;
            printf("Modulo = %d\n", (int)result);
            
            continue;
        }


       
        else if (choice == 6)
        {
            float obtain, total;

            printf("Enter obtained marks : ");
            scanf("%f", &obtain);

            printf("Enter total marks : ");
            scanf("%f", &total);

            if (total == 0)
            {
                printf("Error! Total cannot be zero.\n");
                continue;
            }

            result = (obtain / total) * 100;
            printf("Percentage = %.2f%%\n", result);
            continue;
        }

        else if(choice == 7) {
            int a;
            printf("Enter a number to find Even or Odd");
            scanf("%d", &a);

            if(a % 2 == 0) {
                printf("%d is a Even number.\n", a);
            }
            else {
                printf("%d is a Odd number.\n", a);
            }
            continue;
        }

        printf("Enter numbers (Press 0 to stop):\n");
        scanf("%f", &num);

        result = num;  

        while (1)
        {
            scanf("%f", &num);

            if (num == 0)
                break;

            switch (choice)
            {
                case 1:  result += num; break;
                case 2:  result -= num; break;
                case 3:  result *= num; break;

                case 4:
                    if (num == 0)
                    {
                        printf("Error! Can't divide by zero.\n");
                        continue;
                    }
                    result /= num;
                    break;

                case 5:
                    result = (int)result % (int)num;
                    break;
            }
        }

        printf("Result = %.2f\n", result);
    }

    return 0;
}