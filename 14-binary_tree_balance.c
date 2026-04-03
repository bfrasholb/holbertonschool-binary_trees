#include "binary_trees.h"
#include "14-bintree_height.c"

/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: a pointer to the root of tree to measure
 * Return: the balance factor, or 0 if !tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
