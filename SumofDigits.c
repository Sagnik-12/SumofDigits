//C program to find sum of digits of a number
#include <stdio.h>

int sumofdigits(int num)
{
    if (num != 0)
    return (num % 10 + sumofdigits(num / 10));//formula to add the digits of the number
    else
    return 0;
}

int main()
{
    int num;
    printf("Enter the number of your choice: ");
    scanf("%d",&num);
    int result = sumofdigits(num);//calling sumofdigits function
    printf("Sum of digits of the entered number is %d", result);
    return 0;
}
