#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (i > 0)
    {
        printf("%i is positive", i);
    }
    else if (i== 0)
	{
        printf("%i is zero", i);
    }
    else
    {
        printf("%i is negative", i);
    }
    
}