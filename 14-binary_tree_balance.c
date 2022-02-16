#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a binary tree
 *
 * Return: the balance factor of @tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);

	balance_factor = binary_tree_leaves(tree->left) - binary_tree_leaves
		(tree->right);

	return (balance_factor);
}

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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a binary tree
 *
 * Return: number of leaves in @tree, 0 if @tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
