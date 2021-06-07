#include<iostream>
#define fastAsFk_boi()   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

class BST{
    int data;
    BST *left,*right;

    public:

    BST();

    BST(int);

    BST* Insert(BST*,int);

    void Inorder(BST*);
    void Preorder(BST*);
    void Postorder(BST*);
};

BST :: BST(): data() , left(NULL) , right(NULL){}

BST :: BST(int value){
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root,int value){
    if(!root){
        return new BST(value);
    }

    if(value > root.data){
        root.right = Insert(root.right,value);
    }
    else{
        root.left = Insert(root.left, value);
    }

    return root;

}

void BST::Inorder(BST* root){
    if(!root){
        return;
    }
    Inorder(root.left);
    cout<<root.data<<" ";
    Inorder(root.right);
}
void BST::Preorder(BST* root){
    if(!root){
        return;
    }
    cout<<root.data<<" ";
    Preorder(root.left);
    Preorder(root.right);
}

void BST::Postorder(BST* root){
    if(!root){
        return;
    }
    Postorder(root.left);
    Postorder(root.right);
    cout<<root.data<<" ";
}


int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	fastAsFk_boi();

    BST b,*root = NULL;
    root = b.Insert(root,50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
 
    b.Postorder(root);
    return 0;

}