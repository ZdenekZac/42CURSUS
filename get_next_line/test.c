#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// EXAMPLE 1)

// int main (){
// 	int fd;

// 	fd = open("test.txt", O_RDONLY | O_CREAT);
// 	printf("fd of text.txt: %d", fd);
// 	return (0);
// }

// EXAMPLE 2)

// int main (){
// 	int fd;

// 	fd = open("test2.txt", O_RDWR | O_CREAT);
// 	printf("fd of test2.txt: %d\n", fd);
// 	write(1, "hello", 5);
// 	//write(3, "hello22", 7);
// 	write(fd, "hello22", 7);
// 	return (0);
// }

// EXAMPLE 3)

// int main (){
// 	int fd;

// 	fd = open("test2.txt", O_RDWR | O_CREAT | O_APPEND);

// 	dup2(fd, 1);
 
// 	write(4, "hello22", 7);
// 	return (0);
// }

// EXAMPLE 3)

// int main (){
// 	int fd;

// 	fd = open("test2.txt", O_RDWR | O_CREAT | O_APPEND);

// 	dup2(fd, 1);
 
// 	write(4, "hello22", 7);
// 	return (0);
// }

// EXAMPLE 4)

struct Person {
	char name[10];
	int age;
};

void updateStruct(struct Person *p, int age)
{
	p->age = age;
}

int main(int argc, char **argv)
{
	struct Person lowlevellearning;
	updateStruct(&lowlevellearning, 100);

	return (0);
}