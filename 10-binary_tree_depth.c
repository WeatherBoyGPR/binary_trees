#include "binary_trees.h"

/**
 * binary_tree_depth - will find the depth of a node
 * @tree: node to measure depth of
 *
 * Return: depth as size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *bal = NULL;
	size_t res = 0;

	bal = tree;
	if (!bal)
		return (0);
	while (bal)
	{
		bal = bal->parent;
		if (bal)
			res++;
	}

	return (res);
}
