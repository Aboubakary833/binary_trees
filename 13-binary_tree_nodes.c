#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child
 * @tree: Tree root
 * Return: Number of node's children or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		nodeCount++;

	nodeCount += binary_tree_nodes(tree->left);
	nodeCount += binary_tree_nodes(tree->right);

	return (nodeCount);
}
