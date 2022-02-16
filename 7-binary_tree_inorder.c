#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: the tree to traverse
 * @func: function called at every node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
	{
		binary_tree_inorder(tree->left, func);
		if (!tree->left->left || !tree->left->right)
			func(tree->left->n);
		func(tree->n);
	}

	if (tree->right)
	{
		binary_tree_inorder(tree->right, func);
		if (!tree->right->left || !tree->right->right)
			func(tree->right->n);
	}

}
