#include "binary_trees.h"

/**
 * binary_tree_is_leaf- checks whether a node is a leaf
 * @node: a pointer to the node to check
 * Return: returns 1 if node is leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int isleaf = 0;

	if (!node)
		return (isleaf);
	if (!(node->left) && !(node->right))
		isleaf = 1;
	return (isleaf);
}
