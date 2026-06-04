#include <stdio.h>
int main()
{
    int num, a, b, sum;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    a = num / 10;
    b = num % 10;
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}