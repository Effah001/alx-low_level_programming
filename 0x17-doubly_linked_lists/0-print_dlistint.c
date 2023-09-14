#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: points to head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h){
    const dlistint_t *current = h;

    size_t node_count = 0;

    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
        node_count++;
    }
    printf("\n");

    return node_count;
}
