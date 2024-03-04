#include "sort.h"
/**
 *swap - swap
 *@a: a
 *@b: b
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
/**
 *partition - the back bone of quick sort
 *@arr: array
 *@low: low boundary
 *@high: high
 *@size: of the array
 *Return: i + 1
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}
/**
 *quickSort - the back bone of quick sort
 *@arr: array
 *@low: low boundary
 *@high: high
 *@size: of the array
 */
void quickSort(int arr[], int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}
/**
 *quick_sort - the back bone of quick sort
 *@array: array
 *@size: of the array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
