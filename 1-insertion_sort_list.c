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
temp = current->next;

while (prev != NULL && prev->n > key->n)
{
prev->next = key->next;
if (key->next != NULL)
key->next->prev = prev;
key->prev = prev->prev;
key->next = prev;
prev->prev = key;

if (prev->prev != NULL)
prev->prev->next = key;
else
*list = key;

prev = key->prev;
print_list(*list);
}
current = temp;
}
}
