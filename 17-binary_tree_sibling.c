#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of
 * a node
 * @node: is a pointer to the node to fnd the
 * sibling
 * Return: NULL, a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->left == NULL || node->parent->right
		== NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);

	else if (node->parent->right->n == node->n)
		return (node->parent->left);

	return (NULL);
}

