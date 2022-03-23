#include "binary_trees.h"
/**
 * binary_tree_height - function that measures
 * the height of a binary tree.
 * @tree: Pointer to the binary tree.
 * Return: size_t height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		height_l += 1;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		if (height_l > 0)
			height_r += height_l;
		height_r += 1;
		binary_tree_height(tree->right);
	}
	if (height_l >= height_r)
		return (height_l);
	return (height_r);
}
