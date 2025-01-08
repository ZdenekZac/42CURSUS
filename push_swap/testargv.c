#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	while (i < argc)
	{
		printf("argument %d: %s\n", i+1, argv[i]);
		i++;
	}
	return (0);
}