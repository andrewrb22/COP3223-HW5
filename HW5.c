#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, x, *q;
    int y = 6;
    x = 100;
    p = &x;

    *p = 800;
    printf("%d\n", *p);

    q = &x;

    q = &y;

    p = q;

    printf("%d\n%d\n%d", *q, *p, y);


    return 0;
}

//    int *p;

//     p = malloc(sizeof(int));

//     printf("Enter your number: ");
//     scanf("%d", &*p);

//     printf("You have enter: %d\n", *p);

//     printf("Double of the number you enter is: %d\n", 2 * *p);