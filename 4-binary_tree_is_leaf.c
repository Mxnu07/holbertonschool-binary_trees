#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* Check if the given node is NULL (empty) */
    if (!node)
        return (0);
    /* Check if the node has no left child and no right child */
    if (!node->left && !node->right)
    {
        return (1);
    }
    return (0);
}
