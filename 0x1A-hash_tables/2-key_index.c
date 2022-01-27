#include "hash_tables.h"

/**
* key_index - create a table hash
*@key : Variable
*@size : size
*Return: hash
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int indice = 0;
	indice = hash_djb2(key) % size;
	return (indice);
}