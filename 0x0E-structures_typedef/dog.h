#ifndef dog_H
#define dog_H
/**
 * struct dog - Short description
 *@name: variable
 *@owner:variable
 *@age:variable
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* dog */
