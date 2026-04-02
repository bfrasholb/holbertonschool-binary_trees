#include "binary_trees.h"

/**
 * binary_tree_node- creates a node in a binary tree
 * @parent: a node in binary tree to be set as the parent node
 * @value: a value to be stored in the node
 * Return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
