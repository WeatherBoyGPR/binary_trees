#include "binary_trees.h"

/**
 * binary_tree_is_leaf - tests if binary tree node has children
 * @node: node to test
 *
 * Return: 1 on leaf, 0 otherwise and on NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (!(node->right) && !(node->left)))
		return (1);
	return (0);
}
