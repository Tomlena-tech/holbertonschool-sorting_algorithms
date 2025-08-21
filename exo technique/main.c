#include <stdlib.h>
#include <stdio.h>


/**
 * Create a fonction Managing a Dynamic Array of Integers
 * 
 * 
 * 
 * 
 * 
 * 
 * * @param size The size of the array to create
**/

int* createArray(int size) 
{
	int *array = NULL;
	int size;
	int i;

	if (size <= 1) 
	{
		return NULL; 
	}
	int* array = (int*)malloc(size * sizeof(int));
	if (array == NULL)
	{
		printf ("error");
		return NULL;
	}
}
void fillArray(int* array, int size)
	{
		if (array == NULL || size = 0) 
		{
			printf ("error");
			return; 
		}
		for (int i = 0; i < size; i++)
		{
		array[i] = i + 1; 

		}
	}
void printArray(int* array, int size)
	{
		if (array == NULL || size <= 0) 
		{
			printf ("error");
			return; 
		}
		for (int i = 0; i < size; i++) 
		{
			printf("%d ", array[i]);
		}	
	}
int get_element(int* array, int size, int index) 
	{
		if (array == NULL || size <= 0 || index < 0 || index >= size) 
		{
			printf ("error");
			return -1; 
		}
		return array[index];
	}
void freeMemory(int* array) 
{
	{
		if (array != NULL) 
		{
			free(array);
			array = NULL; 
		}
	}

	return array;
}
