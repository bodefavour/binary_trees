#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves present in a binary tree
 *
 * @tree: If tree is NULL, the function must always return 0
 * Return: A NULL pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t node_count_leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	node_count_leaves += binary_tree_leaves(tree->left);
	node_count_leaves += binary_tree_leaves(tree->right);

	return (node_count_leaves);
}