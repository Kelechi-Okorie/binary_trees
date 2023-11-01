#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of a node in a binary tree
 * @tree: pointer to the node to get the depth of
 * Description: returns the depth of a node in a binary tree
 * depth is the number of edges from the node to the root
 *
 * Return: the depth of a node in a tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *node;

	depth = 0;
	node = tree;

	if (!tree)
		return (0);

	while (node->parent)
	{
		depth++;
		node = node->parent;
	}

	return (depth);
}
