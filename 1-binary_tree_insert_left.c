#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: Return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t)), *tmp;

	if ((parent == NULL) | (new_node == NULL))
		return (NULL);

	new_node->n = value;
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		free(new_node);
	}
	else
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	return (new_node);
}
