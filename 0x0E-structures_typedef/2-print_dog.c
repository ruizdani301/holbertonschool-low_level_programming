#include <stdio.h>
#include "dog.h"
/**
 * print_dog - inicializa variable
 * @d:variable
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		if (d->age >= 0)
		{
			printf("%f\n", d->age);
		}
		else
		{
			printf("age: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
