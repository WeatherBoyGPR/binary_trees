#include "binary_trees.h"

/**
 * binary_tree_leaves - will count leaves in a tree
 * @tree: tree to process
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t pile = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		pile += binary_tree_leaves(tree->right);
	if (tree->left)
		pile += binary_tree_leaves(tree->left);
	if (!(tree->right) && !(tree->left))
		return (1);
	return (pile);
}
