
#include "problem4.h"
#include <stdio.h>

int main(int argc, char* argv[])
{

  // Put anything here that you think is appropriate to test your function
  int len = 4;
  const char * strings[4] = {"afslfd","ggdg","dog","dd78"};
  
  const char * shortest = find_shortest(strings,len);
  
  return(0);
}

