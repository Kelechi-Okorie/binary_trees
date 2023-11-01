#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: the parent of this node
 * @value: the integer stored in this node
 * Description: creates a binary tree node
 * with parent @parent and value @value
 *
 * Return: pointer to new node on success
 * NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
