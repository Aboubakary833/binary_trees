#include "binary_trees.h"

/**
 * binary_tree_height - Mesure hight of a tree
 * @tree: The tree
 * Return: The height of a tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}
