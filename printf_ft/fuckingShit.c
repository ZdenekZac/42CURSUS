#include <stdarg.h>
#include <stdio.h>

// int	average(int n, ...)
// {
// 	va_list ap;
// 	int	total;
// 	int	i;

// 	va_start(ap, n);
// 	total = 0;
// 	i = 0;
// 	while (i < n)
// 	{
// 		total += va_arg(ap, int);
// 		i++;
// 	}
// 	return (total / n);
// }

// int main() {
// 	int	avg_age;
// 	avg_age = average(3, 10, 15, 20);
// 	printf("result: %d", avg_age);

//     return 0;
// }

int	ft_avg(int n, ...)
{
	va_list		ap;
	int			total;
	int			i;

	va_start(ap, n);
	total = 0;
	i = 0;

	while (i < n)
	{
		total = total + va_arg(ap, int);
		i++;
	}
	return (total / n);
}

int main()
{
	int avg;
	avg = ft_avg(3, 10, 15, 20);
	printf("result %d", avg);
	return 0;
}