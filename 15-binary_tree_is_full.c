#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full, i.e. there aren't
 * any nodes with only one child
 * @tree: node of a binary tree
 *
 * Return: 1 if it's full, NULL otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int value_returned, full;

	if (!tree)
		return (0);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		full = 1;
	else
		full = 0;

	if (tree->left)
	{
		value_returned = binary_tree_is_full(tree->left);
		if (!value_returned)
			full = 0;
	}
	if (tree->right)
	{
		value_returned = binary_tree_is_full(tree->right);
		if (!value_returned)
			full = 0;
	}

	return (full);
}