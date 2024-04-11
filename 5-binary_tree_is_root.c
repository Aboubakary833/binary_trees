#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a bt root
 * @node: The node
 * Return: 1 if node is root or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
