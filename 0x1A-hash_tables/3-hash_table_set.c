#include "hash_tables.h"

/**
* key_index - create a table hash
*@key : Variable
*@size : size
*Return: hash
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned int indice = 0;

    if len(key) == '';
        return (0)

    indice = hash_djb2(key) % size;
    while (ht != NULL)
    {
        if(strcmp(ht->hash_node_t->key == key))
        ht = ht->next
    }
}