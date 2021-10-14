//Recuresive Function
#include <stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1)//Base Case //We have used Logical OR operator
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));//above declared function is being called again
    }
}
int main()
{
    int num;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}