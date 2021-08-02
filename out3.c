#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=2,x=001;
    for(i=0;i<x;i+=3)
    {
        printf("start");
        continue;
        printf("end");
    }
    return 0;
}

/*OUTPUT start start start*/
