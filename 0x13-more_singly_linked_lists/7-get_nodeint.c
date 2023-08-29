#include "lists.h"

/**
 * fetch_list_node_at_index - acquires the node at a specified index within a linked list
 * @head: the initial node in the linked list
 * @index: the index of the desired node
 *
 * Result: pointer to the targeted node, or NULL if absent
 */
listint_t *fetch_list_node_at_index(listint_t *head, unsigned int index)
{
    unsigned int counter = 0;
    listint_t *current = head;

    while (current && counter < index)
    {
        current = current->next;
        counter++;
    }

    return (current ? current : NULL);
}
