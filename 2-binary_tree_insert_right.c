#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert right child node
 * @parent: The parent node
 * @value: New child node value
 * Return: New created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (parent->right)
	{
		binary_tree_t *right = parent->right;

		node->right = right;
		right->parent = node;
	}
	parent->right = node;

	return (node);
}
