#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node in a binary tree
 * @parent: a node in binary tree to be set as the parent node
 * @value: a value to be stored in the node
 * Return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert;

	if (!parent)
		return (NULL);
	insert = malloc(sizeof(*insert));
	if (!insert)
		return (NULL);
	insert->n = value;
	insert->parent = parent;
	insert->left = parent->left;
	insert->right = NULL;
	parent->left = insert;
	if (insert->left)
		insert->left->parent = insert;
	return (insert);
}
