#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *p;
    float *q;
    char *c;


    p = malloc(sizeof(float));
    c = malloc(sizeof(char));
    q = malloc (sizeof(float));

    printf("Enter your two Integers:\n ");
    scanf("%f %f", &*p, &*q);





    printf("Now, enter a or A to show the sum, p or P to show the product or d or D to show the division of the first by the second: \n");
    scanf("%c", &*c);
    

    // if (*c == 'a' || *c == 'A'){
    //     printf("%f + %f  = %.2f", *p, *q, *p + *q);
    // }




    return 0;
}
// printf("You have enter: %.2f\n", *p);