#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node at the specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index){
    dlistint_t *temp = head;
    unsigned int count = 0;

    while (temp != NULL) {
        if (count == index) {
            return temp;
        }
        temp = temp->next;
        count++;
    }
    return NULL;
}
