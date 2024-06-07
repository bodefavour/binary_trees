#include "binary_trees.h"

/**
 * binary_tree_height_aux -  function that describes a tree height
 * @tree: Pointer to the node
 * Return: Trees
 */
size_t	binary_tree_node_height_aux(const binary_tree_t *tree)
{
	size_t hleft_node = 0, hright_node = 0;

	if (!tree)
		return (0);
	if (tree->left)
		hleft_node = 1 + binary_tree_node_height_aux(tree->left);
	if (tree->right)
		hright_node = 1 + binary_tree_node_height_aux(tree->right);

	if (hleft_node > hright_node)
		return (hleft_node);
	return (hright_node);
}

/**
 * print_level_order - function that print each level of the tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: pointer to the level of the tree
 * @func: pointer to a node
 * Return: void
 */
void print_node_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_node_level_order(tree->left, level - 1, func);
		print_node_level_order(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - function that goes through a binary tree using level-order traversal
 * binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0;
	int len = 1;

	if (!tree || !func)
		return;

	height = binary_tree_node_height_aux(tree) + 1;

	while (len <= height)
	{
		print_node_level_order(tree, len, func);
		len++;
	}
}