#include "binary_trees.h"

/**
 * binary_tree_insert_left - will insert a node into the left branch of a node
 * @parent: node to insert new node into the left branch of
 * @value: value for new node to hold
 *
 * Return: newly create node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);
	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = newn;
		newn->left = parent->left;
	}
	parent->left = newn;

	return (newn);
}
