#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: the node to find the uncle of
 * Description: finds the uncle of @node
 *
 * Return: returns the uncle of @node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node to find the sibling of
 * Description: finds the sibling of @node
 *
 * Return: the sibling of @node on success,
 * NULL if @node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
