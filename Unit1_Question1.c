//Here is first question in which I have considered how do we find the AREA OF CIRCLE
#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area = %.2f", area);

    return 0;
}
