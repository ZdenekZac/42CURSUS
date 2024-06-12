#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	my_printf(const char *format, ...)
{
	
}

int main()
{
	int	count;
	count = my_printf("hello ");
	my_printf("number of chars are: %d\n", count);
}