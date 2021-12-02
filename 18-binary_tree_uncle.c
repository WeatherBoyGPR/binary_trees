#include "binary_trees.h"

/**
 * binary_tree_uncle - will return uncle of node
 * @node: node to find sibling of
 *
 * Return: uncle, or NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *rh, *lh;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (!(node->parent->parent))
		return (NULL);
	rh = node->parent->parent->right;
	lh = node->parent->parent->left;
	if (node->parent == rh)
		return (lh);
	return (rh);
}
