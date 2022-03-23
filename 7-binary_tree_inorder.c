#include "binary_trees.h"
//BT = binary tree.
/**
 * binary_tree_inorder - Function that goes through
 * a binary tree using in-order traversal.
 * @tree: Pointer to the binary tree.
 * @func: function to use with the value in the BT.
 * Return: None, is void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;
    
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
