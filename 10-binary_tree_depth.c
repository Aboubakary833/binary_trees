#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree - The tree root
 * Return: depth of the tree or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree) 
{
		size_t depth = 0;

		if (!tree)
				return (0);
		depth = binary_tree_depth(tree->parent);

		return (depth);
}
