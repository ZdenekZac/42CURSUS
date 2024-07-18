#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct hovno {
	int				cislo;
	struct hovno	*dalsi;
} hovinko;



int main(){
hovinko *hovno1 = malloc(sizeof(hovinko));
hovinko *hovno2 = malloc(sizeof(hovinko));
hovinko *hovno3 = malloc(sizeof(hovinko));
hovno1->cislo = 11;
hovno2->cislo = 22;
 hovno3->cislo = 33;

 hovno1->dalsi = hovno2;
 hovno2->dalsi = hovno3;
 hovno3->dalsi = NULL;


hovinko *current = hovno1;
while (current)
{
	printf("result: %d\n",current->cislo);
	current = current->dalsi;
}
	return (0);

}
