#include "binary_trees.h"

/**
 * binary_tree_balance - will calculate balance factor in tree
 * @tree: tree to process
 *
 * Return: balance factor as int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rh = 0, lh = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		rh = (binary_tree_height_alt(tree->right) + 1);
	if (tree->left)
		lh = (binary_tree_height_alt(tree->left) + 1);
	return (lh - rh);
}

/**
 * binary_tree_height_alt - will calculate height of left or right branch
 * @tree: tree to measure
 *
 * Return: height of binary tree as int
 */
int binary_tree_height_alt(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh += 1;
	if (tree->right)
		rh += 1;
	rh += binary_tree_height_alt(tree->right);
	lh += binary_tree_height_alt(tree->left);
	if (rh > lh)
		return (rh);
	else
		return (lh);
	return (1);
}
