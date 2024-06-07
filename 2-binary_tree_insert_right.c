#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to node of which to insert the right-child into
 * @value: value to store inside the new node
 * Return: a pointer to the newly created node,
 *	or NULL on failure or if the parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_now = NULL;

	if (!parent)
		return (NULL);

	new_now = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new_now->n = value;
	new_now->left = NULL;

	if (parent->right == NULL)
	{
		new_now->parent = parent;
		new_now->right = NULL;
		parent->right = new;
	}
	else
	{
		new_now->parent = parent;
		new_now->right = parent->right;
		parent->right = new_now;
		new_now->right->parent = new_now;
	}
	return (new_now);
}