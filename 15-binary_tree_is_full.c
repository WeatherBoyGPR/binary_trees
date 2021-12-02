#include "binary_trees.h"

/**
 * binary_tree_is_full - will check for incomplete node
 * @tree: tree to check
 *
 * Return: 0 on incomplete node, 1 on full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t res = 0;

	if (tree == NULL)
		return (0);
	res = res | binary_tree_is_full(tree->right);
	res = res | binary_tree_is_full(tree->left);
	if (tree->left || tree->right)
		if (!(tree->left && tree->right))
			return (1);
	return (res);
}
