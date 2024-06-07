#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: a pointer to the node that is to be checked
 * Return: 1 if the node is a root, otherwise return 0
 * If node is NULL, then return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}