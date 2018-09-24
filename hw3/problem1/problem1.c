
#include "problem1.h"
#include <stdio.h>

int print_factors(int n)
{

  // Fill in this function
  int input = n;
  if (n == 1 || n <= 0)
    {
      // 0 and negative numbers have no prime factors
      printf("No prime factors of %d\n",input);
      return(-1);
    }
  else
    {
      // 2 is the first prime number
      int i = 2;
      while(i <= input){
	if (n % i == 0)
	  {
	    // i is a prime factor of input n
	    printf("%d\n",i);
	    n = n/i;
	    i = 1;
	  }
	if (n == 1)
	  {
	    printf("All prime factors of %d are printed\n",input);
	    break;
	  }
	i++;	
      }
      return (0);
    } 
}

