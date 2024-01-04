#include "binary_trees.h"
#include <stdbool.h>
/**
 * checkLevel -Checking level of each tree
 * @tree: The tree
 * @level: level of the tree
 * @depth: Depth of the tree
 * Return: True or false
 */
bool checkLevel(const binary_tree_t *tree, int level, int depth)
{
	if (tree == NULL)
		return (tree);
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);
	return (checkLevel(tree->left, level + 1, depth) &&
			checkLevel(tree->right, level + 1, depth));
}
/**
 *  binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if binary tree is full. 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = -1;
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);

	current = tree;
	while (current != NULL)
	{
		/* code */
		depth++;
		current = current->left;
	}
	return (checkLevel(tree, 0, depth) ? 1 : 0);
}
