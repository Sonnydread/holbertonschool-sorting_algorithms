#include "sort.h"

/**
 * insertion_sort_list - sort a linked list in ascending
 * @list: The linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{

listint_t *top = NULL, *tmp = NULL, *aux = NULL;

if (!list)
return;
top = *list;
while (top)
{
tmp = top;
while (tmp->prev && tmp->n < tmp->prev->n)
{
aux = tmp;
tmp = tmp->prev;
tmp->next = aux->next;
if (aux->next)
aux->next->prev = tmp;
aux->next = tmp;
aux->prev = tmp->prev;
if (tmp->prev)
{
tmp->prev->next = aux;
tmp->prev = aux;
}
else
tmp->prev = aux;
while (aux->prev)
aux = aux->prev;
print_list(aux);
tmp = tmp->prev;
}
top = top->next;
}
while (tmp->prev)
tmp = tmp->prev;
(*list) = tmp;
}
