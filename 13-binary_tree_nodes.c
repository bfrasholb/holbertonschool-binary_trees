#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in tree
 * @tree: pointer to the root node of tree to count
 * Return: the number of nodes with >1 child, or 0 if !tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
