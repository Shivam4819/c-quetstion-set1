/* 
 * File:   main.cpp
 * Author: shivam
 *
 * Created on 13 March, 2018, 11:56 PM
 */

#include <iostream>
#include "../Question/element in order.h"
#include "../Question/segregate 0 and 1.h"
#include "../Question/Tree_identical.h"
#include "../Question/tree_height.h"
using namespace std;

/*
 * 
 */
int main() {
    Element_in_order e;
    Segregate_0_and_1 s;
    //"this is for seperating the positive and negative number
    e.accept();
    e.display();
    e.seperate();
    //"this is for seperating the 0 and 1 
    s.acceptdata();
    s.displaydata();
    s.segregate();
    
    //this is for finding tree is identical or not
    
    node *root1 = enter(8);
    node *root2 = enter(8);
    root1->left = enter(10);
    root1->right = enter(3);
    root1->left->left = enter(4);
    root1->left->right = enter(5);
    root1->right->right = enter(6);
    
    root2->left = enter(10);
    root2->right = enter(3);
    root2->left->left = enter(4);
    root2->left->right = enter(5);
    root2->right->right = enter(6);
    
    if(identicalTrees(root1,root2))
    cout<<"identical";
    else
    cout<<"not identical";
     
    /*this is to find height of tree*/
     int h;
    node *root = enter(1);
    root->left = enter(2);
    root->right = enter(3);
    root->left->left = enter(4);
    root->left->right = enter(5);
    h=height(root1);
    cout<<"height of tree is"<<h;
    return 0;
}

