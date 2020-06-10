#include<bits/stdc++.h>

using namespace std;

struct BstNode
{
long int data;
struct BstNode* right;
struct BstNode* left;
};

struct BstNode* root;

struct BstNode* GetNewNode(long int x)
{
struct BstNode* NewNode;
NewNode = (struct BstNode*)malloc(sizeof(struct BstNode));
NewNode->data = x;
NewNode->right = NewNode->left = NULL;
return NewNode;
}

struct BstNode* Insert(struct BstNode* root,long int x)
{
if(root==NULL)
root = GetNewNode(x);
else
{
if(x <= root->data)
root->left = Insert(root->left,x);
else
root->right = Insert(root->right,x);
}
return root;
}

struct BstNode* prestart = NULL;
void Find(struct BstNode* root,long int x)
{
if(root==NULL)
return;
else
{
if(x == root->data)
prestart = root;
else if(x < root->data)
Find(root->left,x);
else
Find(root->right,x);
}
}
//Preorder : <root> <left> <right> DLR
void PreOrderPrint(struct BstNode* root)
{
if(root==NULL)
return ;
else
{
printf("%d\n",root->data);
PreOrderPrint(root->left);
PreOrderPrint(root->right);
}
}
int main()
{
root = NULL;
int n,i;
scanf("%d",&n);
long int temp;
for(i=0;i<n;i++)
{
scanf("%ld",&temp);
root = Insert(root,temp);
}
long int q;
scanf("%ld",&q);
Find(root,q);
PreOrderPrint(prestart);
return 0;
}
