#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of non-leave nodes
 * @tree: the tree to count number of non-leave nodes of
 * Description: counts the number of non-leve nodes in @tree
 *
 * Return: the number of non-leave nodes in @tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree to measure the size of
 *  Description: measures the size of a binary tree
 *
 * Return: the size of @tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree to count the leaves of
 * Description: counts the leaves in a binary tree
 *
 * Return: the number of leaves in a binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
