#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds if a node is sibling/uncle in a binary tree
 * @node: node to check uncle in a binary tree
 * Return: The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
