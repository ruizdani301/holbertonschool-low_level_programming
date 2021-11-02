#include <stdio.h>
#include "dog.h"
/**
 * print_dog - inicializa variable
 * @d:variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}

}
