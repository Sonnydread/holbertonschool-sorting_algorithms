#include "sort.h"

/**
 * insertion_sort_list - sort a linked list in ascending order
 * @list: The linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)

{
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

listint_t *current = (*list)->next;
while (current != NULL)
{
listint_t *key = current;
listint_t *prev = current->prev;

while (prev != NULL && prev->n > key->n)
{
listint_t *temp = key->prev;

prev->next = key->next;
if (key->next != NULL)
key->next->prev = prev;
key->prev = prev->prev;
key->next = prev;
prev->prev = key;

if (temp != NULL)
temp->next = key;
else
*list = key;

prev = prev->prev;
print_list(*list);
}

current = current->next;
}
}
