#include "binary_trees.h"

/**
 * binary_tree_sibling - will return sibling of node
 * @node: node to find sibling of
 *
 * Return: sibling, or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *rh, *lh;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	rh = node->parent->right;
	lh = node->parent->left;
	if (node == rh)
		return (lh);
	return (rh);
}
