#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* Assign data to this node */
	new_node->n = value;

	/* Initialize left and right children as NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* Assign parent to new_node */
	new_node->parent = parent;

	return (new_node);
}
