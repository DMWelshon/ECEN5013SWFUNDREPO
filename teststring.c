#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "hw1.h"
#include <string.h>

int test_reverse(char *);
#define DEBUG 1
#undef DEBUG

#ifdef DEBUG
int main(void)
{
  char * str2 = "some NUMmbers12345" ;  
  char i;
  i = reverse_string(NULL, strlen(str2));
  printf("%d\n",(int) i);

  return 0;

}
#endif

#ifndef DEBUG

int main(void)
{
  char * str1 = "This is a string.";
  char * str2 = "some NUMmbers12345" ;
  char * str3 = "Does it reverse \n\0\t correctly?"; 


  test_reverse(str1);
  test_reverse(str2);
  reverse_string(str3, 31);
 /*  test_reverse(str3);*/
 
  printf("All asserts pass!\n");

  return 0;
}
#endif


int test_reverse(char * str)
{
     int i = 0; 
     int length = strlen(str);

    
     assert(reverse_string(str, length ) == 0); 
     assert(reverse_string(NULL, length )!=   0);
     assert(reverse_string(str, 0 ) !=  0); 
     i = 1;

     return i;
}
