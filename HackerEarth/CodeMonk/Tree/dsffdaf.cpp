#include <iostream>
#include <stdlib.h>
using namespace std;
struct TreeNode {
  int data;
  TreeNode *left;
  TreeNode *right;
};
int FindHight(struct TreeNode *root) {
  if (root == NULL)
    return 0;
  int left = FindHight(root->left);
  int right = FindHight(root->right);
  return max(left, right) + 1;
}
TreeNode *NewNode(int data) {
  TreeNode *newnode = new TreeNode();
  newnode->data = data;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}
struct TreeNode *insert(struct TreeNode *root, int data) {
  if (root == NULL)
    root = NewNode(data);
  else if (data <= root->data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);
  return root;
}

int main() {
  int n, a;
  cin >> n;
  struct TreeNode *root = NULL;
  for (int i = 0; i < n; i++) {
    cin >> a;
    root = insert(root, a);
  }

  int hight = FindHight(root);
  cout << hight;
}