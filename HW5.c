#include <stdio.h>
#include <stdlib.h>

int main()
{

//First number
    float *p;
//Second Number    
    float *q;
//Option character   
    char options;
//Mmemory allocation for first(p) and second(q) number
    p = malloc(sizeof(*p));
    q = malloc(sizeof(*q));

    printf("Enter your two Integers:\n ");
    scanf("%f %f", &*p, &*q);

    printf("Now, enter the following options:\na or A to show the sum\np or P to show the product\nd or D to show the division of the first by the second: ");
    scanf(" %c", &options);

 if (options != 'A' && options != 'a' && options != 'p' && options != 'P' && options != 'D' && options != 'd')
    {
        printf("\n %c is not a valid option", options);
    }
    else
    {
//Switch case for options
    switch (options)
    {
//Sum of options
    case 'A':
        printf("\n %.2f + %.2f is = %.2f\n", *p, *q, *p + *q);
        break;
    case 'a':
        printf("\n %.2f + %.2f is = %.2f\n", *p, *q, *p + *q);
        break;
//Product of options        
    case 'P':
        printf("\n %.2f * %.2f = %.2f\n", *p, *q, *p * *q);
        break;

    case 'p':
        printf("\n %.2f * %.2f = %.2f\n", *p, *q, *p * *q);
        break;
//Divide by options
    case 'D':
        if (*q == 0)
        {
            printf("\nCan’t divide by 0\n");
            break;
        }
        else
        {
            printf("%.2f / %.2f = %.2f\n", *p, *q, *p / *q);
        }

        break;

    case 'd':
        if (*q == 0)
        {
            printf("\nCan’t divide by 0\n");
            break;
        }
        else
        {
            printf("%.2f / %.2f = %.2f\n", *p, *q, *p / *q);
        }

        break;
    }
}

//Exit from the program
    printf("\n \t Goodbye \n");

    return 0;
}