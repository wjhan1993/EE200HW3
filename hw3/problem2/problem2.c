
#include "problem2.h"
#include <stdio.h>

int find_power(int n)
{

  // Fill in this function
  int powerValue = 1;
  while(powerValue <= n)
    {
      powerValue = powerValue * 2;
    }
  powerValue = powerValue/2;
  printf("The largest power of 2 that is less than or equal to %d is %d\n",n,powerValue);
  return(powerValue); 
}

