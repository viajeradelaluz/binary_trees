#include "binary_trees.h"

/**
 * tree_is_full - Checks if a binary tree is full.
 * @tree: points to the root node of the tree.
 * Return: 1 if it's full, 0 otherwise.
 */
int tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree_is_full(tree->left);
	right = tree_is_full(tree->right);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (1 * left * right);

	return (0);
}

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
	if (!tree)
		return (0);

	if (tree_height(tree->left) == tree_height(tree->right))
	{
		if (tree_is_full(tree->left) && tree_is_full(tree->right))
			return (1);
	}
	return (0);
}
