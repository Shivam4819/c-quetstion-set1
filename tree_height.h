/* 
 * File:   tree_height.h
 * Author: shivam
 *
 * Created on 15 March, 2018, 9:22 PM
 */

#ifndef TREE_HEIGHT_H
#define	TREE_HEIGHT_H

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* enter(int data);

int max(int x,int y);
int height( struct node *temp);


#endif	/* TREE_HEIGHT_H */

