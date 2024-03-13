#ifndef _search_algorithms_
#define _search_algorithms_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;


int linear_search(int *array, size_t size, int value);
int bin_search_algo(int *array, size_t low, size_t high, int value);
int binary_search(int *array, size_t size, int value);
int binary_search(int [], size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int interpolation_algo(int *array, size_t low, size_t high, int value);
int exponential_search(int *array, size_t size, int value);
int exp_bin_search_algo(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);
int adv_bin_search_algo(int *array, size_t low, size_t high, int value);
int jump_list(listint_t *list, size_t size, int value);

#endif
