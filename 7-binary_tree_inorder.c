#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using inorder traversal
 * @tree: the tree to traverse
 * @func: the function for printing the value of the node
 * Description: traverses a binary tree using inorder treaversal
 *
 * Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
