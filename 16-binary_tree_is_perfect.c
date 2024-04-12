#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Tree root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		if ((right && left) || (!right && !left))
			return (1);
		else
			return (0);
}
