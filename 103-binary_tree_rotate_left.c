#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  function that causes a left rotation
 * @tree: Pointer to the rootroot
 *
 * Return: Pointer root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *n_chl, *parent = tree;

	if (!tree)
		return (NULL);

	n_chl = parent->right;
	if (!n_chl)
		return (tree);

	if (n_chl->left)
		n_chl->left->parent = parent;

	parent->right = n_chl->left;
	n_chl->left = parent;
	n_chl->parent = parent->parent;
	parent->parent = n_chl;

	if (n_chl->parent && n_chl->parent->left == parent)
		n_chl->parent->left = n_chl;
	else if (chl->parent)
		n_chl->parent->right = chl;

	return (chl);
}