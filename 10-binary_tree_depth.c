#include "binary_trees.h"

/**
 *binary_tree_depth - Measures the depth of a node in a binary tree
 *@tree: Pointer to the node to measure
 *
 * Return: If tree is NULL, must return 0
 *
 * HOW IT WORKS *
 *
 * 1. If the tree is NULL, return 0.
 * 2. If the tree is not NULL, return 1 + the depth of the parent.
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
