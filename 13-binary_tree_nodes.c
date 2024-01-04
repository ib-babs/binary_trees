#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: Return 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	static size_t countChild;

	if (tree == NULL)
		return (0);

	if ((tree->left || tree->right))
	{
		countChild = 0;
		countChild += 1;
		binary_tree_nodes(tree->left);
	}
	return (countChild);
}
