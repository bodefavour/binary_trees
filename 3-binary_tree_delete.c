#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree present
 *
 * @tree: pointer to the root node of the tree to be delete
 * If tree is NULL, it does nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}