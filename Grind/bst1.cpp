#include<iostream>
#define fastAsFk_boi()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

class BinarySearchTree{
    int data;
    BinarySearchTree *left,*right;

    public:

    BinarySearchTree();

    BinarySearchTree(int);

    BinarySearchTree* Insert(BinarySearchTree*,int);

    void Inorder(BinarySearchTree*);
    void Preorder(BinarySearchTree*);
    void Postorder(BinarySearchTree*);
};

BinarySearchTree :: BinarySearchTree(): data() , left(NULL) , right(NULL){}

BinarySearchTree :: BinarySearchTree(int value){
    data = value;
    left = right = NULL;
}

BinarySearchTree* BinarySearchTree::Insert(BinarySearchTree* root,int value){
    if(!root){
        return new BinarySearchTree(value);
    }

    if(value > root->data){
        root->right = Insert(root->right,value);
    }
    else{
        root->left = Insert(root->left, value);
    }

    return root;

}

void BinarySearchTree::Inorder(BinarySearchTree* root){
    if(!root){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}

int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

    BinarySearchTree b,*root = NULL;
    root = b.Insert(root,50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
 
    b.Inorder(root);
    return 0;

}