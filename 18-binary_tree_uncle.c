#include "binary_trees.h"

/**
 * binary_tree_uncle - Find uncle of a node
 * @node: The node
 * Return: Uncle node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
