
#include "problem4.h"


const char* find_shortest(const char * const * strings, int len)
{

  // Fill in this function
  int i;
  int length = 0;
  const char *shortStr = strings[0];
  
  // calculate the string length of strings[0]
  while(strings[0][length] != '\0')
    length++;
  
  // assume the shortest string is the strings[0]
  int shortest = length;
  
  for(i = 1;i < len;i++){
    length = 0;
    // calculate the length of string[i]
    while(strings[i][length] != '\0')
      length++;
    
    // check whether string[i] is shorter than the current shortest string
    // if yes, update shortest and the pointer shortStr
    if(length < shortest){
      shortest = length;
      shortStr = strings[i];
    }
    }
  return(shortStr);
}

