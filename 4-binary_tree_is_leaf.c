#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node in a binary tree is a leaf
 * @node: an element in a binary tree
 *
 * Return: 1 if it's a leaf (no left and right elements inside it), 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
