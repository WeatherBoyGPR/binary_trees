#include "binary_trees.h"

/**
 * binary_tree_is_full - will check for incomplete node
 * @tree: tree to check
 *
 * Return: 0 on incomplete node, 1 on full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int res = 1;

	if (tree == NULL)
		return (0);
	if (!(tree->right && tree->left))
	{
		if (tree->right || tree->left)
			return (0);
	}
	else
	{
		res = res & binary_tree_is_full(tree->right);
		res = res & binary_tree_is_full(tree->left);
	}

	return (res);
}
