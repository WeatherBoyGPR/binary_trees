#include "binary_trees.h"

/**
 * binary_tree_nodes - will count nodes with a child in a tree
 * @tree: tree to process
 *
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t pile = 0;

	if (tree == NULL)
		return (0);
	if (tree->right || tree->left)
		pile = 1;
	if (tree->right)
		pile += binary_tree_nodes(tree->right);
	if (tree->left)
		pile += binary_tree_nodes(tree->left);
	return (pile);
}
