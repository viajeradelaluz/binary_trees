#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: points to the node to insert the right-child in.
 * @value: info to put in the new node.
 * Return: a pointer to the new node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	node->right = parent->right;
	if (parent->right)
		node->right->parent = node;
	parent->right = node;

	return (node);
}
