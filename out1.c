#include <stdio.h>
#include <stdlib.h>
extern int x;

int main()
{
    do{
        printf("%o",x);
    }while(0);

    return 0;
}
int x=8;

/*OUTPUT :10 */
