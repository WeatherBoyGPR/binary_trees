#include "binary_trees.h"

/**
 * binary_tree_is_parent - tests if binary tree node is child
 * @node: node to test
 *
 * Return: 1 on parent, 0 otherwise and on NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && (!(node->parent)))
		return (1);
	return (0);
}
