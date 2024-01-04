#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: Return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t)), *tmp;

	if ((parent == NULL) || (new_node == NULL))
		return (NULL);

	new_node->n = value;
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		free(new_node);
	}

	else
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	return (new_node);
}
