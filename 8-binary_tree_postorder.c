#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/* first recur on left child */
		binary_tree_postorder(tree->left, func);
		/* then recur on right child */
		binary_tree_postorder(tree->right, func);
		/* now deal with the node */
		func(tree->n);
	}
}
