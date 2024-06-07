#include "binary_trees.h"

/**
 * binary_tree_height_balance - function that measures the actual height balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to actually measure the balance factor
 *
 * Return: height
 * If tree is NULL, then return 0
 */

size_t binary_node_tree_height_balance(const binary_tree_t *tree)
{
	size_t h_left_node = 0, h_right_node = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left_node = 1 + binary_node_tree_height_balance(tree->left);
	if (tree->right)
		h_right_node = 1 + binary_node_tree_height_balance(tree->right);

	if (h_left_node > h_right_node)
		return (h_left_node);
	return (h_right_node);
}

/**
 * binary_tree_balance - function that measures the actual balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * Return: balance factor
 * If tree is NULL, then return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left_node = 0, h_right_node = 0;

	if (!tree)
		return (0);
	if (tree->left)
		h_left_node = 1 + binary_node_tree_height_balance(tree->left);
	if (tree->right)
		h_right_node = 1 + binary_node_tree_height_balance(tree->right);
	return (h_left_node - h_right_node);
}