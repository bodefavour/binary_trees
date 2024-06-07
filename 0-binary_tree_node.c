#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value to put in the node
 * Return: pointer to the new node
 *	or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_now = NULL;

	new_node_now = malloc(sizeof(binary_tree_t));
	if (!new_node_now)
		return (NULL);

	new_node_now->parent = parent;
	new_node_now->n = value;
	new_node_now->left = NULL;
	new_node_now->right = NULL;
	return (new_node_now);
}