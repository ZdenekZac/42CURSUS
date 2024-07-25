#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *strchr(const char *s, int c);


int main()
{
	char *s = "test";
	int	c = 101;
	printf("%p",strchr(s, c));
	return 0;
}
