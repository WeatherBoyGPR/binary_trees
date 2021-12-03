#include "binary_trees.h"

/**
 * is_desc - will tell if a node is a descendant of another
 * @parent: parent to test
 * @child: child to test
 *
 * Return: 1 if child is descendant of parent, 0 otherwise and on error
 */
int is_desc(const binary_tree_t *parent, const binary_tree_t *child)
{
	if (parent == NULL || child == NULL)
		return (0);
	if (parent == child)
		return (1);
	if (parent->right == child || parent->left == child)
		return (1);
	if (parent->right)
		return (is_desc(parent->right, child));
	if (parent->left)
		return (is_desc(parent->left, child));
	return (0);
}

/**
 * binary_trees_ancestor - will return nearest common ancestor of two nodes
 * @first: first node to find ancestor of, used to navigate
 * @second: second node to find ancestor of, used to test against
 *
 * Return: common ancestor, NULL on no ancestor or error
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (is_desc(first, second))
		return ((binary_tree_t *)first);
	else if (first->parent)
		return ((binary_tree_t *)binary_trees_ancestor(first->parent, second));
	return (NULL);
}
