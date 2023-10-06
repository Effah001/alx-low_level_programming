#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints the key-value pairs of a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; ++i)
    {
        hash_node_t *current = ht->array[i];
        while (current)
        {
            printf("'%s': '%s'", current->key, current->value);
            if (current->next)
                printf(", ");
            current = current->next;
        }
    }
    printf("}\n");
}

