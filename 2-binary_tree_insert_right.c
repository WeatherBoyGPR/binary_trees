#include "binary_trees.h"

/**
 * binary_tree_insert_right - will insert a node into right branch of a node
 * @parent: node to insert new node into the right branch of
 * @value: value for new node to hold
 *
 * Return: newly create node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);
	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = newn;
		newn->right = parent->right;
	}
	parent->right = newn;

	return (newn);
}
