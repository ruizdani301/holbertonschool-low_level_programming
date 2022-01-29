#include "hash_tables.h"

/**
* hash_table_create - create a table hash
*@size : Variable
*Return: new
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL)

	new = malloc(sizeof(size));
	if (new == NULL)
	{
		return (NULL);
	}
}
