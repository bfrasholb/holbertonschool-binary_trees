#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		lheight = 0;
	else
		lheight = binary_tree_height(tree->left);

	if (tree->right == NULL)
		rheight = 0;
	else
		rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

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
