#include "binary_trees.h"

/**
 * binary_tree_delete- deletes a binary tree
 * @tree: head node of a tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
		free(tree);
}
