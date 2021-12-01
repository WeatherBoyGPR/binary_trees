#include "binary_trees.h"

/**
 * binary_tree_height - will calculate height of tree
 * @tree: tree to measure
 *
 * Return: height of binary tree as size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh += 1;
	if (tree->right)
		rh += 1;
	rh += binary_tree_height(tree->right);
	lh += binary_tree_height(tree->left);
	if (rh > lh)
		return (rh);
	else
		return (lh);
	return (1);
}
