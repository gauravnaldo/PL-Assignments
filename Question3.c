//Here is third question in which I have considered how to SWAP TWO NUMBERS TAKEN FROM USER INPUT in C

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
