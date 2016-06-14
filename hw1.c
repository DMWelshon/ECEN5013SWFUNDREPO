#include "hw1.h"
#include <stdio.h>

char reverse_string(char * str, int length)
{
  
  // Make sure str is not null
  if( !str)
  {
    return -1;
  }

  //Validate length for reasonable range
  if( length <= 0)
  {
     return -2;
  }
  
  
  int i; 
  char * ptr1 = str;
  char buffer[length];


  //Start reading the string into the buffer backwards
  for(i = length - 1 ;  i >= 0 ; i--)
  {
      buffer[i] = *ptr1++; 
  }  
 
  //print the buffer
  printf("Reversed String\n");

  for(i = 0; i < length; i++)
  {
     printf("%c", buffer[i]);
  }

  printf("\n\n");

  return 0;
}
