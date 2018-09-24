
#include "problem4.h"


int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  // You can define triangles here, since the struct is declared in the header
  Triangle t;
  
  Triangle First;
  First.a.x = 0;
  First.a.y = 0;
  First.b.x = 3;
  First.b.y = 0;
  First.c.x = 0;
  First.c.y  = 4;
  
  Triangle Second;
  Second.a.x = 1;
  Second.a.y = 1;
  Second.b.x = 2;
  Second.b.y = 4;
  Second.c.x = 3;
  Second.c.y = 1;
  
  t = getLarger(First,Second);
  return(0);
}

