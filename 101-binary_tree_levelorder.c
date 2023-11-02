#include "binary_trees.h"

/**
 * print_level - prints a given level of a binary treee
 * @tree: the tree to print
 * @func: the function for printing the node
 * @level: the current level of the in the iteration
 * Description: prints a given level of a binary tree
 *
 * Return: void
*/
void print_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
	{
		func(tree->n);
	}
	else
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - traverses a binary tree using levelorder
 * @tree: the tree to traverse
 * @func: the function for printing the node
 * Description: goes throug a binary tree using a level-order traversal
 *
 * Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, height;

	if (!tree || !func)
		return;

	height = 1 + binary_tree_height(tree);

	for (level = 1; level <= height; level++)
		print_level(tree, func, level);
}

/**
 * binary_tree_height - returns height of binary tree
 * @tree: the tree to return the height of
 * Description: returns the height of binary tree
 *
 * Return: the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	height_left = height_right = 0;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}
