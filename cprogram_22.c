#include <stdio.h>
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - 5 * ((num/10 )% 2);
    printf("Result = %d", result);
    return 0;
}