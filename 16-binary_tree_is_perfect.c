#include "binary_trees.h"

/**
 * _pow - compute a raise to power b
 * @a: the base
 * @b: the exponent
 * Description: computes and returns the value of @a to the @b
 *
 * Return: return @a raise to the @b
*/
int _pow(int a, int b)
{
	int ans = 1;

	while (b)
	{
		ans = ans * a;
		b--;
	}

	return (ans);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to check
 * Description: checks if a binary tree is perfect
 *
 * Return: 1 if tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, is_leaf, max_nodes;

	if (!tree)
		return (0);

	is_leaf = binary_tree_is_leaf(tree);
	if (is_leaf)
		return (1);

	size = (int)binary_tree_size(tree);
	height = (int)binary_tree_height(tree);

	max_nodes = _pow(2, height + 1) - 1;
	return (max_nodes == size);
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
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node to check if it's a leaf
 * Description: checks if a node is a leaf
 *
 * Return: 1 if @node is a leaf, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);

	return (1);
}
