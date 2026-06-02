#include <stdio.h>

int main()
 {
    int num, a;
    printf("Enter a two digit number: ");
    scanf("%d", &num);
    a= num / 10;
    printf("Tens digit = %d", a);
    return 0;
}