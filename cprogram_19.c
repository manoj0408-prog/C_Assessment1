#include <stdio.h>
int main() {
    int num,a, result;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    a = (num /10);
    result = a*10+ 2;
    printf("Result = %d", result);

    return 0;
}