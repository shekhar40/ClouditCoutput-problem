
#include <stdio.h>
int i=40;
extern int i;

int main()
{
    do{
        printf("%d",i++);
    }while(5,4,3,2,1,0);
   
  
    return 0;
}
