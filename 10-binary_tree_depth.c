#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: must return 0 if tree is null. Depth if otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	static size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		depth = 0;
		binary_tree_depth(tree->parent);
		depth += 1;
	}
	return (depth);
}
