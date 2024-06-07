#include "binary_trees.h"

/**
 * compare_node_depth - function to compare depth size of nodes
 *
 * @tree: a pointer to the root node of the tree to measure size
 * Return: size
 */
int compare_node_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_node_depth(tree->left) + 1 + compare_node_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check if it is perfect
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left_node = 0, h_right_node = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left_node = compare_node_depth(tree->left);
	h_right_node = compare_node_depth(tree->right);

	if ((h_left_node - h_right_node) == 0)
		return (1);

	return (0);
}