#include "lists.h"

/**
 * sum_dlistint - sum up all the elements of the node
 * @head: pointer to the head of the list
 *
 * Return: pointer to the node at the specified index
 */
int sum_dlistint(dlistint_t *head) {
    int sum = 0;
    if (head == NULL)
        return 0;

    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }
    return sum;
}
