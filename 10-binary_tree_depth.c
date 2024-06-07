#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node present in a binary tree
 *
 * @tree: a pointer to the node to measure the depth of the node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth_node = 1 + binary_tree_depth(tree->parent);
	return (depth_node);
}