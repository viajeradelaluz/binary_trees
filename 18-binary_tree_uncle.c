#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: points to the node to find the sibling.
 * Return: the sibling, otherwise NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: points to the node to find the uncle.
 * Return: the uncle, otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
