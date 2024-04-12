#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor for two nodes
 * @first: First node
 * @second: Second node
 * Return: Common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *f_parent, *s_parent;

	if (!first || !second)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	f_parent = first->parent;
	s_parent = second->parent;
	if (!f_parent || first == s_parent || (!f_parent->parent && s_parent))
	{
		return (binary_trees_ancestor(first, s_parent));
	}
	else if (!s_parent || f_parent == second || (!s_parent->parent && f_parent))
	{
		return (binary_trees_ancestor(f_parent, second));
	}
	return (binary_trees_ancestor(f_parent, s_parent));
}