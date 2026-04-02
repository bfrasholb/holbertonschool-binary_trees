#include "binary_trees.h"

/**
 * binary_tree_is_root- checks if a given node is a root
 * @node: the node to check
 * Return: returns 1 if node is a root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int isroot = 0;

	if (!node)
		return (isroot);
	if (!(node->parent))
		isroot = 1;
	return (isroot);
}

