#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char c = 0;
    printf("Enter an expression:");
    scanf("%f", &a);
    while (c != '\0') {
        scanf("%c%f",&c,&b);
        if (c == '+') {
            a = a + b;
        } else if (c == '-') {
            a = a - b;
        } else if (c == '*') {
            a = a * b;
        } else if (c == '/') {
            a = a / b;
        }
    }
    printf("Value of expression:%.1f", a);
    return 0;
}