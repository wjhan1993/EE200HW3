
#include "problem3.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double calculate(double x, char operation, double y)
{

  // Fill in this function
  double result;
  switch(operation)
    {
    case '+':
      result = x + y;
      break;
    case '-':
      result = x - y;
      break;
    case '*':
      result = x * y;
      break;
    case '/':
      if (y == 0)
	{
	  printf("Error! Invalid denominator\n");
	  result = 0;
	}
      else
      result = x / y;
      break;
    case 94: //ASCII value of ^ is 94 
      result = pow(x,y);
      break;
    default:
      result = 0;
      printf("Error! Invalid operation\n");
      exit(1);
    }
  printf("%f %c %f = %f\n",x,operation,y,result);
  return(result); 
}

