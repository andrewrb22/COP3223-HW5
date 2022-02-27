#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p;
    float *q;
    char options;


    p = malloc(sizeof(*p));
    q = malloc (sizeof(*q));

    printf("Enter your two Integers:\n ");
    scanf("%f %f", &*p, &*q);

    printf("Now, enter the following options:\na or A to show the sum\np or P to show the product\nd or D to show the division of the first by the second: ");
    scanf(" %c",&options);

switch (options)
{
case 'A':
    printf("\n %.2f + %.2f is = %.2f\n", *p , *q , *p + *q);
    break;

case 'a':
    printf("\n %.2f + %.2f is = %.2f\n", *p , *q , *p + *q);
    break;
    case 'P':
    printf("\n %.2f * %.2f = %.2f\n", *p, *q, *p * *q);
    break;

case 'p':
    printf("\n %.2f * %.2f = %.2f\n", *p, *q, *p * *q);
    break;
}
    
    // }
    // if( options == 'D' || options == 'd'){
    //     printf("%.2f / %.2f = %.2f\n", *p, *q, *p / *q);
    // }
    



    printf("\n \t Goodbye \n"); 
    






    return 0;
}