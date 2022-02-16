#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: an element in a binary tree
 *
 * Return: a node in the binary tree sibling to @node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
