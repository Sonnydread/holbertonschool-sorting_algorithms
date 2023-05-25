#include "sort.h"

/**
 * selection_sort - array of integers in ascending order
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t R, W, min_index;
int temp;

if (array == NULL || size <= 1)
return;

R = 0;
while (R < size - 1)
{
min_index = R;
W = R + 1;
while (W < size)
{
if (array[W] < array[min_index])
min_index = W;
W++;
}

if (min_index != R)
{
temp = array[R];
array[R] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
R++;
}
}
