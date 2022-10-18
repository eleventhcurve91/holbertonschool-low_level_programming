#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int x, y = 0;
	x = strlen(s);

	while (y < x){
	{
		printf("%c", s[y]);
	}
	y++;
	}
}
