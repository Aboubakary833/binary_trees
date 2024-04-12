#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Tree root
 * Return: 1 if bt is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right, isFull = 0;

	if (!tree)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	isFull = (left && right) || (!left && !right) ? 1 : 0;

	return (isFull);
}
