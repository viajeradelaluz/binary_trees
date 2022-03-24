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
 * binary_tree_balance - Gets the balance factor of a binary tree.
 * @tree: points to the root node of the tree.
 * Return: balance factor, 0 on failure.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (!tree)
		return (0);

	balance = tree_height(tree->left) - tree_height(tree->right);

	return (balance);
}
