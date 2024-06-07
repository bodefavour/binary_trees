#include "binary_trees.h"

/**
 * search_uncle - binary tree
 * @node: node
 * Return: uncle
 */
binary_tree_t *search_node_uncle(binary_tree_t *node)
{
	binary_tree_t *node_grandpa = NULL;

	if (!node || !(node->parent))
		return (NULL);
	node_grandpa = node->parent;
	/* check left or right uncle */
	if (node_grandpa->left && (node_grandpa->left != node))
		return (node_grandpa->left);
	else if (node_grandpa->right && (node_grandpa->right != node))
		return (node_grandpa->right);
	return (NULL);
}

/**
 * binary_tree_uncle - function that describes binary tree uncle
 * @node: pointer to node
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (search_node_uncle(node->parent));
}