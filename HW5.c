#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p;
    float *q;
    char c;


    p = malloc(sizeof(*p));
    q = malloc (sizeof(*q));

    printf("Enter your two Integers:\n ");
    scanf("%f %f", &*p, &*q);

    printf("Now, enter the following options:\na or A to show the sum\np or P to show the product\nd or D to show the division of the first by the second: ");
    scanf(" %c",&c);

// do
// {
    if (c == 'A' || c == 'a')
    {
        printf("\n %.2f + %.2f is = %.2f\n", *p , *q , *p + *q);
    }
    if(c == 'p' || c == 'P'){
        printf("\n %.2f * %.2f = %.2f\n", *p, *q, *p * *q);

    }
    if( c== 'D' || c == 'd'){
        printf("%.2f / %.2f = %.2f\n", *p, *q, *p / *q);
    }
    



    printf("\n \t Goodbye \n"); 
    


// } while ( c == 'A' || c == 'a');



    return 0;
}
// printf("You have enter: %.2f\n", *p);