#include <stdio.h>
int main() {
    int num,a, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    a = num % 10;
    result = 10 + a;
    printf("Result = %d", result);

    return 0;
}