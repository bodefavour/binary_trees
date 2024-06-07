#include "binary_trees.h"

/**
 * binary_tree_postorder - this function goes through the binary tree using a post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node to be called.
 * The value in the node must always be passed as a parameter to this function.
 * If tree or func is NULL, then do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}