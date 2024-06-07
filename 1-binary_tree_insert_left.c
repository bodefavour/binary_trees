#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node present
 *
 * @parent: pointer to the node of which the left-child is inserted into
 * @value: value to be stored inside the new node
 * Return: pointer to the newly created node. NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_left = NULL, *new_node_now = NULL;

	if (!parent)
		return (NULL);
	new_node_now = malloc(sizeof(binary_tree_t));

	if (!new_node_now)
		return (NULL);

	new_node_now->parent = parent;
	new_node_now->left = NULL;
	new_node_now->right = NULL;
	new_node_now->n = value;

	parent_left = parent->left;
	parent->left = new_node_now;

	if (pleft)
	{
		parent_left->parent = new_node_now;
		new_node_now->left = parent_left;
	}

	return (new_node_now);
}