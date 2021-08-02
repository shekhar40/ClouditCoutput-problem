#include <stdio.h>
#include <stdlib.h>


int main()
{
  char str[120] ="Digital BD";
  int n;
  n=strlen(str);
  str[4]='\0';
  printf("%s",str);
    return 0;
}


 
