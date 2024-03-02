/* 31. AVL - Insert */
#include "binary_trees.h"


/**
 * bst_insert_recursion - recursively traverses a Binary Search Tree to insert
 * a new value
 *
 * @tree: binary tree node
 * @value: integer to insert in new node
 * Return: pointer to new node, or NULL on failure or value found already
 * found in tree
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *new = NULL;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->left = new;
			return (new);
		}

		return (bst_insert_recursion(tree->left, value));
	}

	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->right = new;
			return (new);
		}

		return (bst_insert_recursion(tree->right, value));
	}

	/* (tree->n == value) */
	return (NULL);
}


/**
 * bst_insert - Inserts a value into an AVL tree.
 * @tree: A double pointer to the root node of the AVL tree to insert into.
 * @value: The value to insert into the AVL tree.
 *
 * Return: A pointer to the inserted node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;

	if (!tree || !(*tree))
	{
		new = binary_tree_node(NULL, value);
		*tree = new;
		return (new);
	}

	return (bst_insert_recursion(*tree, value));
}
