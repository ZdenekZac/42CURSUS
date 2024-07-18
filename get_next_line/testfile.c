/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdoskoci <zdoskoci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:18:10 by zdoskoci          #+#    #+#             */
/*   Updated: 2024/07/15 19:41:11 by zdoskoci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h> 

// EXAMPLE 1)

// int main()
// {
// 	int fd;

// 	fd = open("file.txt", O_RDWR | O_CREAT );
	
// 	//printf("fd of file: %d\n ", fd);
// 	dup2(3, 1);
// 	write(1, "hellooo", 7);

// 	return (0);
// }

// EXAMPLE 2)

int main(){
	int		fd2;
	char	buf[256];
	int		chars_read;
	
	fd2 = open("file.txt", O_RDONLY);

	while((chars_read = read(fd2, buf, 10)))
	{
		buf[chars_read] = '\0';
		printf("buf-> %s\n", buf);
	}
}

// EXAMPLE 3) ---STATIC VARIABLE---

// void func() {
//     static int count = 0; // This is initialized only once.
//     count++;              // Increment the value of count.
//     printf("%d\n", count); // Print the current value of count.
// }

// int main() {
//     func(); // First call to func, count is 1
//     func(); // Second call to func, count is 2
//     func(); // Third call to func, count is 3
//     return 0;
// }

// EXAMPLE 4)

// #include <stdio.h>
    
// typedef struct Person{
//     char name[50];
//     int age;
//     float height;
// } Person1;

// int main() {
//     struct Person person1;
// 	Person1 person2;

// 	    strcpy(person2.name, "eeee");
//     person2.age = 3;
//     person2.height = 9;

//     //---ASSIGN VALUES TO MEMBERS---
//     strcpy(person1.name, "John Doe");
//     person1.age = 30;
//     person1.height = 5.9;

//     //---ACCES AND PRINT MEMBERS---
//     printf("Name: %s\n", person1.name);
//     printf("Age: %d\n", person1.age);
//     printf("Height: %.1f\n", person1.height);
// 	    printf("Name: %s\n", "----------------");

// 	    printf("Name: %s\n", person2.name);
//     printf("Age: %d\n", person2.age);
//     printf("Height: %.1f\n", person2.height);

//     return 0;
// }
