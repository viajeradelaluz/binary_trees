#include "binary_trees.h"
/**
 * tree_height - Measures the height of a binary tree.
 * @tree: pointer to bainary tree to measure.
 * Return: height of the tree, 0 on failure.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the binary tree.
 * Return: height of the tree, 0 on failure.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree) - 1);
}
