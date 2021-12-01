#include "binary_trees.h"

/**
 * binary_tree_postorder - will transverse tree, postorder form, performs func
 * @tree: tree to traverse
 * @func: function to run on every node in tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	if (func)
		func(tree->n);
}
