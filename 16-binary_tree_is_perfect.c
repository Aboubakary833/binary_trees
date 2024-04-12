#include "binary_trees.h"

int get_binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Tree root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leftHeight = get_binary_tree_depth(tree->left);
	rightHeight = get_binary_tree_depth(tree->right);

	if (!(leftHeight - rightHeight))
		return (1);
	return (0);
}

/**
 * get_binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: The tree root
 * Return: depth of the tree or 0
 */
int get_binary_tree_depth(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = get_binary_tree_depth(tree->left);
	right = get_binary_tree_depth(tree->right);

	return (left + 1 + right);
}
