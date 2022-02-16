#include "binary_trees.h"

/**
 * binary_tree_uncle - returns the 'uncle' of a binary tree node
 * @node: an element in a binary tree
 *
 * Return: the uncle of @node, NULL otheriwse
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent ||
	(!node->parent->parent->left && !node->parent->parent->right))
		return (NULL);

	/**
	 * If the uncle is the right child of the node's grandparent
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
