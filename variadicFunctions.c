#include <stdarg.h>
#include <stdio.h>

float average(int n, ...)
{
	va_list ap;
	int	total;
	int i;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	return (float)total/n;
}

int main()
{
	float	average_age;
			// THIS 5 IS A FLAG
	average_age = average(3, 10, 15, 20);
	printf("the average age is %f\n", average_age);
	return (0);
}