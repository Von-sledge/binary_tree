#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 * right-child of another node.
 * @parent: is a pointer to the node tio insert the right-child in.
 * @value: is the value to store to the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (NULL);

	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
		return (NULL);

	rightnode->parent = parent;
	rightnode->n = value;
	rightnode->right = parent->right;
	rightnode->left = NULL;

	if (rightnode->right != NULL)
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}

	parent->right = rightnode;

	return (rightnode);
}
