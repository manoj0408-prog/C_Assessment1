#include <stdio.h>
int main() {
    int num, a, b, c, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    a = num / 100;         // Hundreds digit
    b = (num / 10) % 10;  // Tens digit
    c = num % 10;         // Ones digit
    reverse = c * 100 + b * 10 + a;
    printf("Reversed number = %d", reverse);
    return 0;
}