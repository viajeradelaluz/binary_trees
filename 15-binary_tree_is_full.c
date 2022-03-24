#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: points to the node to check.
 * Return: 1 if node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: points to the root node of the tree.
 * Return: 1 if it's full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (binary_tree_is_leaf(tree))
		return (1);
	if (tree->left && tree->right)
		return (1 * left * right);

	return (0);
}
