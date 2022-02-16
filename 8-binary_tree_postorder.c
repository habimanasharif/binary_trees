#include "binary_trees.h"


/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * traversal
 * @tree: the tree to traverse
 * @func: function called at every node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->left->n);
	}


	if (tree->right)
	{
		binary_tree_postorder(tree->right, func);
		func(tree->right->n);
	}

	if (!tree->parent)
		func(tree->n);
}
