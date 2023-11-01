#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: the tree to traverse
 * @func: pointer to function for printing the integer in the node
 * Description: traverses a binary tree using pre-order traversal
 *
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree ||  !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
