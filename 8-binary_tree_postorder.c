#include "binary_trees.h"

/**
 * binary_tree_postorder- traverses a binary tree in postorder
 * @tree: a tree to traverse
 * @func: a function to call for each node on tree->n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
