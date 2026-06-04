#include <stdio.h>

int main()
{
    int num, a, b, c, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    a = (num / 100) * 100;  
    b = (num / 10) % 10;        
    c = num % 10;               
    result = a +c * 10 + b;
    printf("Result = %d", result);
    return 0;
}