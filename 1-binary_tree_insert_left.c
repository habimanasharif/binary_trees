#include <memory.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node with value @value as the
 * right-child of @parent
 * @parent: the parent who will have a new left child
 * @value: the value of the new node
 *
 * Return: the newly inserted node if successful, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);
	binary_tree_t *right_placeholder;

	if (!new_node || !parent)
		return (NULL);

	right_placeholder = parent->right;

	if (right_placeholder)
	{
		right_placeholder->parent = new_node;
		new_node->right = right_placeholder;
	}

	parent->right = new_node;
	return (new_node);
}
