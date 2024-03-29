#ifndef SORT_T
#define SORT_T
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(int* a, int* b);
void quickSort(int arr[], int low, int high, size_t size);
int partition(int arr[], int low, int high, size_t size);
void quick_sort(int *array, size_t size);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void selection_sort(int *array, size_t size);
int main(void);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
#endif

