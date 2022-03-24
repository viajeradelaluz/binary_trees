#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the
 * nodes with at least 1 child in a binary tree.
 * @tree: pointer to the binary tree.
 * Return: count of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	else
		nodes = 0;
	return (nodes);
}
