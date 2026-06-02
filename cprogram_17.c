#include <stdio.h>

int main() {
    int num, result;
    printf("Enter a twodigit number: ");
    scanf("%d", &num);
    result = (num / 10) * 10;
    printf("Result = %d", result);
    return 0;
}