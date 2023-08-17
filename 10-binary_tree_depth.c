#include "binary_trees.h"

/**
* binary_tree_depth - Returns depth of tree
* @tree: Tree to traverse
*
* Return: Depth of tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = 0, right_depth = 0;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	right_depth = binary_tree_depth(tree->parent);

	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
