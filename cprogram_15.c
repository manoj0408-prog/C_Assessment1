#include <stdio.h>

int main() {
    int num, a, b, c,d, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    a = num / 1000;         // Hundreds digit
    b = (num / 10) % 10;  // Tens digit
    c = num % 10;
    d=(num/100)%10  ;     // Ones digit
    reverse = a * 1000 + d * 100 + c*10+b;
    printf("Reversed number = %d", reverse);

}