#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * of a binary tree.
 * @tree: is a pointer to the root node of the tree to
 * measure the height.
 * Return: 0, if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	return (right);
}
