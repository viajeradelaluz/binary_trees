#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts
 * the leaves in a binary tree.
 * @tree: pointer to a binary tree
 * Return: count of leaves. 0 in case of failure.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		size = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	else
		size = 1;

	return (size);
}
