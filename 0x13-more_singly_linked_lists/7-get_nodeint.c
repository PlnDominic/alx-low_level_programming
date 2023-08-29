#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the desired node, starting from 0
 *
 * Return: pointer to the nth node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current = head;

    while (current)
    {
        if (count == index)
            return current;

        current = current->next;
        count++;
    }

    return NULL; // Node at the specified index was not found
}
