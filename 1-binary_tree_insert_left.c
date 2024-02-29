#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store ini the new node
 *
 * Return: a pointer to the created node, NULL on failure /
 * if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);

	leftnode->parent = parent;
	leftnode->n = value;
	leftnode->left = parent->left;
	leftnode->right = NULL;

	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}

	parent->left = leftnode;

	return (leftnode);
}
