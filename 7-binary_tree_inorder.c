#include "binary_trees.h"

/**
 * binary_tree_inorder - this goes through a binary tree using an in-order traversal
 * @tree: a pointer to the root node of the tree to actually traverse
 * @func: a pointer to the function to call for each node.
 * The value in the node must always be passed as a parameter to this function.
 * If tree or func is NULL, then do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}