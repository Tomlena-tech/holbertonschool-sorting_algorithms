/* sort.h
 * Header file for sorting algorithms
 * This file contains the declarations of sorting functions and data structures.
 */
#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);



void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_recursive(int *array, int low, int high, size_t size);
int partition(int *array, int lo, int hi, size_t size);



#endif 
