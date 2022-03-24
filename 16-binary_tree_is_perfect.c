#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: pointer to the binary tree.
 * Return: height of the tree, 0 on failure.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (-1);

	left = tree_height(tree->left) + 1;
	right = tree_height(tree->right) + 1;

	if (left >= right)
		return (left);
	return (right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: pointer to the binary tree.
 * Return: 1 if it's full, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (tree_height(tree->left) == tree_height(tree->right))
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		if (left == right)
			return (1);
	}
	return (0);
}
