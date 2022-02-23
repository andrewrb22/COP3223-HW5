# include <stdio.h>
#include <stdlib.h>

int main(){

    int size;
    float *p;

    printf("Enter how many numbers: ");
    scanf("%d", &size);

    p = malloc(size*sizeof(float));



    return 0;
}