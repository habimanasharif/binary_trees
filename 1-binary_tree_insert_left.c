#include <memory.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node with value @value as the left-child
 * of @parent
 * @parent: the parent who will have a new left child
 * @value: the value of the new node
 *
 * Return: the newly inserted node if successful, NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);
	binary_tree_t *left_placeholder;

	if (!new_node || !parent)
		return (NULL);

	left_placeholder = parent->left;

	if (left_placeholder)
	{
		left_placeholder->parent = new_node;
		new_node->left = left_placeholder;
	}

	parent->left = new_node;
	return (new_node);
}
