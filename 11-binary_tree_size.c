#include "binary_trees.h"

/**
 * binary_tree_size - will return number of nodes in tree
 * @tree: tree to process
 *
 * Return: size of tree as size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t res = 1;

	if (tree == NULL)
		return (0);
	res += binary_tree_size(tree->right);
	res += binary_tree_size(tree->left);
	return (res);
}
