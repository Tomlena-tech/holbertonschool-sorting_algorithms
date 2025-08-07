#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Definition de la structure d'une liste doublement chaînée */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes */
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);

#endif /* SORT_H */

