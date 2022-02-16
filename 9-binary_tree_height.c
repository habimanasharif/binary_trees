#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a binary tree
 *
 * Return: height of the @tree, NULL otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (right_height > left_height)
		return (right_height);
	return (left_height);
}
