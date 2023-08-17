#include "binary_trees.h"

/**
* binary_tree_height - Returns height of tree
* @tree: Tree to traverse
*
* Return: Height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	left_height++;
	right_height = binary_tree_height(tree->right);
	right_height++;

	if (left_height < right_height)
		return (right_height);
	else
		return (left_height);
}

/**
* binary_tree_is_perfect - Checks if binary tree is perfect
* @tree: Tree
* Return: 0 if NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) &&
		    binary_tree_is_perfect(tree->left))
			return (1);
	}
	return (0);
}
