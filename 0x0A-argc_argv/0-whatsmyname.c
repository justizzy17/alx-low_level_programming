#include <stdio.h>

int main (int agrc, char *agrv[])
{
	if (agrc > 0)
	{
		printf("%s\n", agrv[0]);
	}
	return (0);
}
