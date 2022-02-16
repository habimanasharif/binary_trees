#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree from memory
 * @tree: tree to be deleted
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
