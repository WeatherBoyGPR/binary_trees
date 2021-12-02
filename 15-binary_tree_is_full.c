#include "binary_trees.h"

/**
 * is_full_core - enables recursion in binary_tree_is_full
 * @tree: tree to check
 *
 * Return: 1 on full tree
 */
int is_full_core(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);
	if (tree->right && tree->left)
	{
		res = res & binary_tree_is_full(tree->right);
		res = res & binary_tree_is_full(tree->left);
		return (res);
	}
	else
		return (1);

}

/**
 * binary_tree_is_full - will check for incomplete node
 * @tree: tree to check
 *
 * Return: 0 on incomplete node, 1 on full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right && tree->left)
		return (is_full_core(tree->left) & is_full_core(tree->right));
	if (tree->right || tree->right)
		return (0);
	return (0);
}
