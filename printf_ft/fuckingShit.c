#include <stdarg.h>
#include <stdio.h>

void print_strings(int count, ...)
{
	va_list args;
	va_start(args, count);

	// if (count > 0)
	// {
	// 	const char *first = va_arg(args, const char*);
	// 	printf("1: %s\n", first);
	// }
	// if (count > 1)
	// {
	// 	const char *second = va_arg(args, const char*);
	// 	printf("2: %s\n", second);
	// }
	// if (count > 2)
		const char *first = va_arg(args, const char*);
		const char *second = va_arg(args, const char*);
		const char *third = va_arg(args, const char*);
		printf("%s %s %s\n", first, second, third);
	
	va_end(args);
}
int main() {
    // print_strings(1, "Hello1");
    // print_strings(2, "Hello2", "World2");
    print_strings(3, "Hello3", "World3", "!");
    return 0;
}