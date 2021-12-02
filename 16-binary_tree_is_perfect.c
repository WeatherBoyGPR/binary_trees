#include "binary_trees.h"

/**
 * binary_tree_height_alt2 - will calculate height of left or right branch
 * @tree: tree to measure
 *
 * Return: height of binary tree as int
 */
int binary_tree_height_alt2(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh += 1;
	if (tree->right)
		rh += 1;
	rh += binary_tree_height_alt2(tree->right);
	lh += binary_tree_height_alt2(tree->left);
	if (rh > lh)
		return (rh);
	else
		return (lh);
	return (1);
}

/**
 * binary_tree_balance_alt - will calculate balance factor in tree
 * @tree: tree to process
 *
 * Return: balance factor as int
 */
int binary_tree_balance_alt(const binary_tree_t *tree)
{
	int rh = 0, lh = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		rh = (binary_tree_height_alt2(tree->right) + 1);
	if (tree->left)
		lh = (binary_tree_height_alt2(tree->left) + 1);
	return (lh - rh);
}

/**
 * binary_tree_is_perfect - will check for incomplete node
 * @tree: tree to check
 *
 * Return: 0 on incomplete node, 1 on perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 1;

	if (tree == NULL)
		return (0);
	if (binary_tree_balance_alt(tree))
		return (0);
	if (!(tree->right && tree->left))
	{
		if (tree->right || tree->left)
			return (0);
	}
	else
	{
		res = res & binary_tree_is_perfect(tree->right);
		res = res & binary_tree_is_perfect(tree->left);
	}

	return (res);
}
