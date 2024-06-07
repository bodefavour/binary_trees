#include "binary_trees.h"

/**
 * count_nodes - function that Counts ths inside a tree
 * @root:  poniter to a node
 *
 * Return: Number odes
 */

int count_nodes_nuber(binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_nodes_nuber(root->left) + count_nodes_nuber(root->right));
}


/**
 * is_complete - function that Checks if a tree is complete
 * @root: Pointer to a tree's root
 * @index: Index of the node been evaluated
 * @n: number of trees node
 *
 * Return: 1 if the tree is a heap, then 0 otherwise
 */

int count_is_complete(binary_tree_t *root, int index, int n)
{
	if (!root)
		return (0);

	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->right && !root->left)
		return (0);
	if (root->left && !root->right)
		return (count_is_complete(root->left, index * 2 + 1, n));

	return (count_is_complete(root->left, index * 2 + 1, n) &&
		count_is_complete(root->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - check for bt complete
 * @tree: Pointer to root
 *
 * Return: 1 if
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nod;
	binary_tree_t *root;

	if (!tree)
		return (0);

	root = (binary_tree_t *)tree;
	nod = count_nodes(root);

	return (is_complete(root, 0, nod));
}