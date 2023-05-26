#include "sort.h"

void quick_sort_recursive(int *array, int low, int high, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
return;

quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - recursive function to perform quicksort
 * @array: array of integers
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 * Return: void
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pivot, H, K, temp;

if (low < high)
{
pivot = array[high];
H = low - 1;
for (K = low; high > K; K++)
{
if (array[K] < pivot)
{
H++;
if (H != K)
{
temp = array[H];
array[H] = array[K];
array[K] = temp;
print_array(array, size);
}
}
}
if (H + 1 != high)
{
temp = array[H + 1];
array[H + 1] = array[high];
array[high] = temp;
print_array(array, size);
}
quick_sort_recursive(array, low, H, size);
quick_sort_recursive(array, H + 1, high, size);
}
}
