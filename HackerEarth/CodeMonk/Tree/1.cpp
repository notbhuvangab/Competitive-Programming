#include<bits/stdc++.h>
 using namespace std;

 struct Node{
     int data;
     Node* left;
     Node* right;
 };

 int height(Node* root){
     if(root==NULL)
     return 0;
     int left=height(root->left);
     int right=height(root->right);
     return max(left,right)+1;
 }

 Node* newNode(int data){
     Node* temp = new Node();
     temp->data = data;
     temp->left = NULL;
     temp->right = NULL;
     return temp;
 }

 Node* Insert(Node* root, int data){
     if(root == NULL)
        root = newNode(data);
    else if (data<=root->data)
        root->left = Insert(root->left,data);
    else
        root->right = Insert(root->right,data);
    return root;
}

int main()
{
    int n,a;
    cin>>n;
    Node* root = NULL;

    for(int i=0;i<n;i++){
        cin>>a;
        root = Insert(root,a);
    }
   int h = height(root);
   cout<<h;
}