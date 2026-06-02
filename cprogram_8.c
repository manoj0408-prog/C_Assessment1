#include <stdio.h>

int main() {
    int num, a;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    a = num % 10;
    printf("Ones digit = %d", a);
    return 0;
}