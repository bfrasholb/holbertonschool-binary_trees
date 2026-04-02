#include "binary_trees.h"

/**
 * binary_tree_preorder- goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of tree
 * @func: pointer to a function to call for each node, value in the node must be passed as its argument
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->n)
		func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
