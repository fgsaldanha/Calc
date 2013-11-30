#include <stdio.h>

void Add(int x, int y)
{
    int i;
    int ans = x + y;
    printf("The answer is: %d\n", ans);
}

int main()
{

    int choice;
    int num1;
    int num2;

    do
    {

        printf("\nSelect one of the following options:\n");
        printf("1 - Addition\n");
        printf("2 - Subtraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("0 - Quit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Please insert a number\n");
                scanf("%d", &num1);
                printf("Please insert a number\n");
                scanf("%d", &num2);
                Add(num1, num2);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                break;
        }

    }
    while(choice != 0);
}
