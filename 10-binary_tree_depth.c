#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree - The tree root
 * Return: depth of the tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree) {
	size_t left = 0;
	size_t right = 0;
	
	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_depth(tree->right) : 0;

	return (left > right ? left : right);
}
