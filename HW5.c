# include <stdio.h>
#include <stdlib.h>

int main(){

  int *p;

  p = malloc(sizeof(int));

  printf("Enter your number: ");
  scanf("%d", &*p);

  printf("You have enter: %d\n", *p);



    return 0;
}