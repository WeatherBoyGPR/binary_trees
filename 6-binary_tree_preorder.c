#include "binary_trees.h"

/**
 * binary_tree_preorder - will transverse tree in preorder form, performs func
 * @tree: tree to traverse
 * @func: function to run on every node in tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func)
		func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
