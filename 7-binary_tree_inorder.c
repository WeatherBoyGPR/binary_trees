#include "binary_trees.h"

/**
 * binary_tree_inorder - will transverse tree in inorder form, performs func
 * @tree: tree to traverse
 * @func: function to run on every node in tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	if (func)
		func(tree->n);
	binary_tree_inorder(tree->right, func);
}
