#include <stdio.h>
int main()
{
    int num, a, b, c, sum, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
    sum = a + b + c;
    result = (sum < 10) ? sum : (sum / 10) + (sum % 10);
    printf("Result = %d", result);
    return 0;
}