#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, return 0. Height otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	static size_t height;

	if (tree == NULL)
		return (0);

	height = 0;
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
	height += 1;

	return (height - 1);
}
