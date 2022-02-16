#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if @node is the root in its binary tree
 * @node: element in a binary tree
 *
 * Return: 1 if @node is the root of the binary tree it's in, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
