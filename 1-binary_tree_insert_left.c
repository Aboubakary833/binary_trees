#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert left child node
 * @parent: The parent node
 * @value: New child node value
 * Return: New created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	parent->left = node;
	parent->right = NULL;

	return (node);
}
