#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: a binary tree
 *
 * Return: number of nodes in @tree, 0 if @tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		nodes++;
		nodes += binary_tree_nodes(tree->left);
	}

	if (tree->right)
	{
		if (!tree->left)
			nodes++;
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
