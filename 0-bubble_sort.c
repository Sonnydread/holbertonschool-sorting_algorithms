#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * @array: Pointer to array
 * @size: Array length
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
size_t x;
size_t s;

if (array == NULL || size < 2)
return;

for (x = 0; x < size - 1; x++)
{
for (s = 0; s < size - x - 1; s++)
{
if (array[s] > array[s + 1])
{
int temp = array[s];
array[s] = array[s + 1];
array[s + 1] = temp;
print_array(array, size);
}
}
}
}
