#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: the parent node
 * @value: the value of the new node
 * Description: inserts node as left child of another node
 * Return: newly created node on success, NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
