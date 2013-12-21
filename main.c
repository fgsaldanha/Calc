#include <stdio.h>

void Add(float x, float y)
{
    float ans = x + y;
    printf("The answer is: %f\n", ans);
}

void Sub(float x, float y)
{
    float ans = x - y;
    printf("The answer is: %f\n", ans);
}

void Mul(float x, float y)
{
    float ans = x * y;
    printf("The answer is: %f\n", ans);
}

void Div(float x, float y)
{
    float ans = x / y;
    printf("The answer is: %f\n", ans);
}

void Pow(float x, float y)
{       
    float ans = 1;
    float rec = 1;
    float z;
    int i;

    if(y < 0)
    {
        z = -y;
    }
    
    for(i = 0; i < y || i < z; i++)
    {
        ans *= x;
        rec = 1/ans;
    }
    
    if(y > 0)
    {
        printf("The answer is: %f\n", ans);
    }
    else 
    {
        printf("The answer is: %f\n", rec);
    }
}   


int main()
{

    int choice;
    float num1;
    float num2;
    
    system("clear");

    do
    {

        printf("\nSelect one of the following options:\n");
        printf("1 - Addition\n");
        printf("2 - Subtraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Exponent\n");
        printf("99 - Help\n");
        printf("0 - Quit\n");

        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nPlease insert a number\n");
                scanf("%f", &num1);
                printf("Please insert a number\n");
                scanf("%f", &num2);
                Add(num1, num2);
                break;
            case 2:
                printf("\nPlease insert a number\n");
                scanf("%f", &num1);
                printf("Please insert a number\n");
                scanf("%f", &num2);
                Sub(num1, num2);
                break;
            case 3:
                printf("\nPlease insert a number\n");
                scanf("%f", &num1);
                printf("Please insert a number\n");
                scanf("%f", &num2);
                Mul(num1, num2);
                break;
            case 4:
                printf("\nPlease insert a number\n");
                scanf("%f", &num1);
                printf("Please insert a number\n");
                scanf("%f", &num2);
                Div(num1, num2);
                break;
            case 5:
                printf("\nPlease insert a base\n");
                scanf("%f", &num1);
                printf("Please insert an exponent\n");
                scanf("%f", &num2);
                Pow(num1, num2);
                break;
            case 99:
				printf("\n101 - to clear the screen\n");
				break;
			case 101:
				system("clear");
				break;
            default:
                break;
        }

    }
    while(choice != 0);
}
