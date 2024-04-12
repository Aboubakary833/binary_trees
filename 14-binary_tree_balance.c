#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Tree root
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
		balance++;
	else if ((tree->left && !tree->right) || (tree->right && !tree->left))
		balance--;
	balance += binary_tree_balance(tree->left);
	balance += binary_tree_balance(tree->right);

	return (balance);
}
