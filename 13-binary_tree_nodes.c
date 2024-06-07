#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child present in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the total number of nodes
 * Return: If tree is NULL, the function must always return 0
 * NB-A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node_count = 1;

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}