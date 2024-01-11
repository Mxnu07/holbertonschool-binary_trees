#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t size = 0, leaves = 0, height = 0;

    if (tree == NULL)
        return (0);

    size = binary_tree_size(tree);
    leaves = binary_tree_leaves(tree);
    height = binary_tree_height(tree);

    return (size == (2 << height) - 1 && leaves == (size + 1) / 2);
}
