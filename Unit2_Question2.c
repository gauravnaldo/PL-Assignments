//Here is second question in which I have considered how to USE IF,IF ELSE ,ELSE in C

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Positive");
    }
    else if (n < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
