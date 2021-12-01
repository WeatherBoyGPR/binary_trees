#include "binary_trees.h"

/**
 * binary_tree_node - will create a binary tree node
 * @parent: parent of node
 * @value: value for node to hold
 *
 * Return: new node on success, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newn = NULL;

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	newn->n = value;
	return (newn);
}
