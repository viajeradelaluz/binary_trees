#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: points to the node to insert the left-child in.
 * @value: info to put in the new node.
 * Return: a pointer to the new node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	node->left = parent->left;
	if (parent->left)
		node->left->parent = node;
	parent->left = node;

	return (node);
}
