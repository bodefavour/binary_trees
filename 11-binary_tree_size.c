#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree in order to measure the size
 * Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i_node = 1;

	if (!tree)
		return (0);

	i_node += binary_tree_size(tree->left);
	i_node += binary_tree_size(tree->right);

	return (i_node);
}