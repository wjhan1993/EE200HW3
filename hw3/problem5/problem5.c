
#include "problem5.h"
#include <stdlib.h>
#include <stdio.h>
void print_random(int n, int max)
{

  // Fill in this function
  int i;
  for (i = 1;i <= n;i++)
    {
    int r = rand() % max;
    printf("%d\n",r);
    }
  printf("%d random numbers within [0,%d) are generated\n",n,max);
}

