#ifndef _search_algorithms_
#define _search_algorithms_

#include <stdio.h>
#include <stdlib.h>

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


#endif
