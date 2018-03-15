/* 
 * File:   Tree_identical.h
 * Author: shivam
 *
 * Created on 15 March, 2018, 8:52 PM
 */

#ifndef TREE_IDENTICAL_H
#define	TREE_IDENTICAL_H

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* enter(int data);

void identical(node *root1,node *root2);


#endif	/* TREE_IDENTICAL_H */

