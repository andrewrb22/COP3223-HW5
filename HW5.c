#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p;

    p = malloc(sizeof(float));

    printf("Enter your number: ");
    scanf("%f", &*p);

    printf("You have enter: %.2f\n", *p);

    printf("Double of the number you enter is: %.2f\n", 2 * *p);

    return 0;
}
