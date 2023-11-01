#include "binary_trees.h"

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
