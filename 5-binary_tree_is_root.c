#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    /* Check if the given node is NULL (empty) */
    if (!node)
        return (0);
    /* Check if the node has no parent */
    if (!node->parent)
        return (1);
    else
        return (0);
}
