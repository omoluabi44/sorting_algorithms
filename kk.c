#include "sort.h"
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void quickSort(int arr[], int low, int high) {
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	int j;
	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, high);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, high);
	return i + 1;
}
void quick_sort(int *array, size_t size)
{
	int i = 0;
	partition(array, i, size);
}
