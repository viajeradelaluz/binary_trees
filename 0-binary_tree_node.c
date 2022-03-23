#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: points to the parent node of the node to create.
 * @value: info to put in the new node.
 * Return: a pointer to the new node, NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
