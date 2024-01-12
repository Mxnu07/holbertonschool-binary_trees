#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree  
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }
    return (depth);
}
<<<<<<< HEAD

=======
>>>>>>> b11836b238fbd7763003f471add65e6b666fd531
