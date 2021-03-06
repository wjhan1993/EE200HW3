
#include "problem4.h"
#include <math.h>
#include <stdio.h>

Triangle getLarger(Triangle first, Triangle second)
{
  Triangle t;

  // Fill in this function
  // Three lines of the first triangle
  double labFirst = sqrt(pow(first.a.x - first.b.x,2) + pow(first.a.y - first.b.y,2));
  double lbcFirst = sqrt(pow(first.b.x - first.c.x,2) + pow(first.b.y - first.c.y,2));
  double lacFirst = sqrt(pow(first.a.x - first.c.x,2) + pow(first.a.y - first.c.y,2));
  double semiFirst = (labFirst + lbcFirst + lacFirst)/2;
  double areaFirst = sqrt(semiFirst * (semiFirst - labFirst) * (semiFirst - lbcFirst) * (semiFirst - lacFirst));
  printf("The first triangle area is %f\n",areaFirst);

  // Three lines of the second triangle
  double labSecond = sqrt(pow(second.a.x - second.b.x,2) + pow(second.a.y - second.b.y,2));
  double lbcSecond = sqrt(pow(second.b.x - second.c.x,2) + pow(second.b.y - second.c.y,2));
  double lacSecond = sqrt(pow(second.a.x - second.c.x,2) + pow(second.a.y - second.c.y,2));
  double semiSecond = (labSecond + lbcSecond + lacSecond)/2;
  double areaSecond = sqrt(semiSecond * (semiSecond - labSecond) * (semiSecond - lbcSecond) * (semiSecond - lacSecond));
  printf("The second triangle area is %f\n",areaSecond);
  
  // Area comparision
  if (areaFirst >= areaSecond)
    {
      printf("The first triangle area is larger\n");
      t = first;
    }
  else
    {
      printf("The second triangle area is larger\n");
      t = second;
    }
  return(t);
}

