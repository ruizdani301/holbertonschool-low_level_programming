#ifndef dog_H
#define dog_H
/**
 * struct dog - Short description
 *@name: variable
 *@owner:variable
 *@age:variable
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* dog */
