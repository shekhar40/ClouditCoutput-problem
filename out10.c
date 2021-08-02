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

--------------------------------------------------------------------
  
  #include <stdio.h>
#include <stdlib.h>


int main()
{
  int i;
	for(i=0;i<5;i++)
	{
		if(i==3)
		continue;
		printf("%d",i);
	}
    return 0;
}
