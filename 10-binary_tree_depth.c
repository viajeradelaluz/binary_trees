#include "binary_trees.h"
/**
 * tree_depth - Measures the depth of a binary tree.
 * @tree: pointer to bainary tree to measure.
 * Return: depth of the tree, 0 on failure.
 */
size_t tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_depth(tree->parent) + 1);
}
/**
 * binary_tree_depth - Measure the depth of a node
 * @tree: pointer to the binary tree.
 * Return: depth of binary tree, NULL in failure.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (tree_depth(tree) - 1);
}
