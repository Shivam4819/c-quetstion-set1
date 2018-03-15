#include <iostream>
#include"../Question/tree_height.cpp"
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

int max(int x,int y)
{
   if(x > y)
      return x;
   else
      return y;   
}

int height( struct node *temp)
{
   int lht,rht;
   if(temp != NULL)
   {
      lht = height(temp->left);
      rht = height(temp->right);
      return(max(lht,rht) + 1);
   }
   return 0;
}

