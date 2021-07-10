#include "binary_trees.h"

/**
*binary_tree_preorder - goes through tree with a preorder traversal
*@tree: tree to go through
*@func: pointer to a function to call for each node
* Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
