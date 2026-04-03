#include "binary_trees.h"

/**
 * binary_tree_height- function finds the height of a binary tree
 * @tree: a pointer to the root node
 * Return: 0 if tree == NULL, else tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		lheight = (size_t)-1;
	else
		lheight = binary_tree_height(tree->left);

	if (tree->right == NULL)
		rheight = (size_t)-1;
	else
		rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
