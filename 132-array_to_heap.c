#include "binary_trees.h"

/**
 * array_to_heap - function that builds a Max Binary Heap tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the root node of the created Binary Heap, or NULL on
 * failure
 */
 
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		heap_insert(&root, array[i]);
		i++;
	}
	return (root);
}
