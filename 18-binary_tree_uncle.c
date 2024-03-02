#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a
 * node
 * @node: is a pointer to the node to find
 * the uncle
 * Return: a pointer to the uncle node
 * if node is NULL, return NULL
 * if node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
