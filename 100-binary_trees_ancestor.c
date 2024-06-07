#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *f_node_anc, *s_node_anc;

	for (f_node_anc = first; f_node_anc; f_node_anc = f_node_anc->parent)
		for (s_node_anc = second; s_node_anc; s_node_anc = s_node_anc->parent)
			if (f_node_anc == s_node_anc)
				return ((binary_tree_t *)f_node_anc);
	return (NULL);
}