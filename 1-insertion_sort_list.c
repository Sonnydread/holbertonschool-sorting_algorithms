#include "sort.h"

/**
 * insertion_sort_list - doubly linked list in ascending order
 * @list: The linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{

listint_t *current, *key, *prev, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;
while (current != NULL)
{
key = current;
prev = current->prev;

while (prev != NULL && prev->n > key->n)
{
temp = key->next;

prev->next = key;
key->prev = prev;
key->next = temp;
if (temp != NULL)
temp->prev = key;

if (prev->prev != NULL)
prev->prev->next = prev;
else
*list = prev;

prev->prev = key;
prev = prev->prev;
print_list(*list);
}

current = current->next;
}
}
