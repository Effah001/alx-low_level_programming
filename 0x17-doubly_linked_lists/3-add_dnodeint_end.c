#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at
 * the end of a doubly linked list
 *
 * @head: points to the head of the linked list
 * @n: value to be stored in the new node
 * Return: a pointer to the newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n){
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *current = *head;

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;
    
    while (current->next != NULL) {
            current = current->next;
    }
        current->next = new_node;
        new_node->prev = current;
 
    return (new_node);
}
