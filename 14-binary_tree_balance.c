#include "binary_trees.h"


int get_binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Tree root
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight, balance;

	if (!tree)
		return (0);
	leftHeight = get_binary_tree_height(tree->left);
	rightHeight = get_binary_tree_height(tree->right);
	balance = (leftHeight - rightHeight);

	return (balance);
}

/**
 * get_binary_tree_height - Mesure hight of a tree
 * @tree: The tree
 * Return: The height of a tree or 0
 */
int get_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? 1 + get_binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + get_binary_tree_height(tree->right) : 1;

	return (left > right ? left : right);
}
