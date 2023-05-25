#include "sort.h"

/**
 * insertion_sort_list - doub linked list in ascending order
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
listint_t *temp = key->next;

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
