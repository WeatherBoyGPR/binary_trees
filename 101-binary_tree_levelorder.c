#include "binary_trees.h"

/**
 * tree_lvl_affect - will affect a specific level of a tree
 * @tree: tree to affect
 * @lvl: level of tree to target
 * @func: function to run on entire level of tree
 *
 * Return: 1 if there are more levels, 0 otherwise
 */
int tree_lvl_affect(const binary_tree_t *tree, int lvl, void(*func)(int))
{
	int res = 0;

	if (tree == NULL || func == NULL)
		return (0);
	if (!lvl)
	{
		func(tree->n);
		if (tree->right || tree->left)
			return (1);
		else
			return (0);
	}
	if (tree->left)
		res = res | tree_lvl_affect(tree->left, lvl - 1, func);
	if (tree->right)
		res = res | tree_lvl_affect(tree->right, lvl - 1, func);
	return (res);

}

/**
 * binary_tree_levelorder - will traverse a tree in levelorder form
 * @tree: tree to traverse
 * @func: function to run on each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void(*func)(int))
{
	int n = 0;

	while (tree_lvl_affect(tree, n, func))
		n++;
}
