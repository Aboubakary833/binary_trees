#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: parent node pointer
 * @value: value for new node
 *
 * Return: The actual binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = malloc(sizeof(binary_tree_t));

	if (!bt)
		return (NULL);

	bt->n = value;
	bt->parent = parent;
	bt->left = NULL;
	bt->right = NULL;

		return (bt);
}
