#include <stdio.h>

int main() {
    int num, a, b, reverse;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    a= num / 10;
    b = num % 10;
    reverse = b* 10 + a;
    printf("Reversed number = %d", reverse);
    return 0;
}