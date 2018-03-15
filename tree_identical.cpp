#include <iostream>
#include"../Question/Tree_identical.h"
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node *enter(int num1){
    node *newnode = new node;
    newnode->data = num1;
    newnode->left = NULL;
    newnode->right = NULL;
}

int identicalTrees(struct node* root1, struct node* root2)
{
    
    if (root1==NULL && root2==NULL)
        return 1;
 
    
    if (root1!=NULL && root2!=NULL)
    {
        return
        (
            root1->data == root2->data &&
            identicalTrees(root1->left, root2->left) &&
            identicalTrees(root1->right, root2->right)
        );
    }
     
    
    return 0;
} 

