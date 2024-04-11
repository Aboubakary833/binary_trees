#include "binary_trees.h"

/**
 * binary_tree_height - Mesure hight of a tree
 * @tree: The tree
 * Return: The height of a tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = !tree ? 0 : ((tree->left && tree->right)
	 ? 2 : (tree->left || tree->right) ? 1 : 0);

	return (height);
}