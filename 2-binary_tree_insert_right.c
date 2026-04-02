#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node in parent->right
 * @parent: the parent node
 * @value: value to store
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert;

	if (!parent)
		return (NULL);
	insert = malloc(sizeof(*insert));
	if (!insert)
		return (NULL);
	insert->n = value;
	insert->parent = parent;
	insert->left = NULL;
	insert->right = parent->right;
	parent->right = insert;
	if (insert->right)
		insert->right->parent = insert;
	return (insert);
}
