#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a tree
 * @tree: The tree
 * Return: The size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = 1 + binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
