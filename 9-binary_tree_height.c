#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure height.
 * Return: 0 If tree is NULL, or return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hlf_now = 0, hrg_now = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf_now = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hrg_now = 1 + binary_tree_height(tree->right);

	if (hlf_now > hrg_now)
		return (hlf_now);
	return (hrg_now);
}