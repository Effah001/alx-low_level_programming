#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints the key-value pairs of a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    if (!ht)
        return;

    int flag = 0;  // Flag to track the first printed pair
    printf("{");

    for (unsigned long int i = 0; i < ht->size; ++i)
    {
        hash_node_t *current = ht->array[i];
        while (current)
        {
            if (flag)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            flag = 1;  // Set the flag to true after printing the first pair
            current = current->next;
        }
    }

    printf("}\n");
}
