#include "sort.h"
/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
 void quick_sort(int *array, size_t size)
 {

        if (array == NULL || size < 2)
            return;
    
        quick_sort_recursive(array, 0, size - 1);
        return;
 }
