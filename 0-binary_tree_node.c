#include "binary_trees.h"

/**
 * binary_tree_node -A function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new Node
 *
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));

	if (!tempNode)
	{
		free(tempNode);
		return (NULL);
	}
tempNode->n = value;
tempNode->parent = NULL;
tempNode->left = NULL;
tempNode->right = NULL;
if (parent)
tempNode->parent = parent;

return (tempNode);


}
