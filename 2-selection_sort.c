#include "sort.h"

/**
 * selection_sort - array of integers in ascending
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
return;

size_t R, W, min_index;
int temp;

for (R = 0; R < size - 1; R++)
{
min_index = R;
for (W = R + 1; W < size; W++)
{
if (array[W] < array[min_index])
min_index = W;

if (min_index != R)
{
temp = array[R];
array[R] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
}
}
}
