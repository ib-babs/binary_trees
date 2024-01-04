#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL other return the size of leave node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	static size_t leavesSize;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		leavesSize = 0;
		binary_tree_leaves(tree->left);
		binary_tree_leaves(tree->right);
		leavesSize += 1;
	}

	return (leavesSize);
}
