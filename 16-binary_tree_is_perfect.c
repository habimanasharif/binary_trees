#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is symmetrical
 * @tree: a binary tree
 *
 * Return: 1 if it's perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, n, h;

	if (!tree)
		return (0);

	l = binary_tree_leaves(tree);
	n = binary_tree_nodes(tree);
	h = binary_tree_height(tree);

	if (l == (n + 1) / 2 ||
		n == 2 * h - 1 || n == power(2, h + 1) - 1)
		return (1);
	return (0);
}


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
 * power - Calculates a ^ b
 * @a: a number
 * @b: a number
 *
 * Return: a ^ b
 */
size_t power(size_t a, size_t b)
{
	while (b--)
		a *= a;
	return (a);
}
