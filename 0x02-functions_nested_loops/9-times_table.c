#include "main.h"
#include <ctype.h>
#include <stdio.h>
void times_table(void)
{
	int i;
	int a;
	int result;
	
	for (i = 0; i < 10 ; i++)
	{
		for (a = 0 ; a < 10 ; a++)
		{
			result = i * a;
			if (a == 0)
				printf("%d, " result);
			else 
			{
				printf("%2d" , result);
				if (a != 0)
					printf(", ");
			}
		}
		printf("\n");
	}
}
