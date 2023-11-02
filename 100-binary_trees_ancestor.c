#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: the first node
 * @second: the second node
 * Description: finds lowest common ancestor nodes @first and  @second
 *
 * Return: the lowest common ancestor of @first and @second
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	while (first && second)
	{
		if (first == second)
		return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}

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
