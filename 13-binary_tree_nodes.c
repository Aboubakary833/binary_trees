#include "binary_trees.h"

size_t get_binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_nodes - Count the nodes with at least 1 child
 * @tree: Tree root
 * To count binary tree node, use the formula: (2h - 1)
 * where h equals to the height of the binary tree
 * Return: Number of node's children or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t height = get_binary_tree_height(tree);

	if (!height)
		return (0);

	return ((height * 2) - 1);
}

/**
 * get_binary_tree_height - Mesure hight of a tree
 * @tree: The tree
 * Return: The height of a tree or 0
 */
size_t get_binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree->left ? 1 + get_binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + get_binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}
