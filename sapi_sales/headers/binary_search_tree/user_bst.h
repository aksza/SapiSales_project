//
// Created by Aksza on 5/4/2022.
//

#ifndef SAPISALES_PROJECT_USER_BST_H
#define SAPISALES_PROJECT_USER_BST_H

#include "user.h"

typedef struct UserTreeNode{
    User* info;
    struct UserTreeNode *left, *right;
}UserTreeNode;

void create(UserTreeNode**);
void insert(UserTreeNode**,User*);
bool search(UserTreeNode*,int );
void inorderPrint(UserTreeNode*, char*);
void preorderPrint(UserTreeNode*,char*);
void postorderPrint(UserTreeNode*,char *);
User* minimum(UserTreeNode*);
User* maximum(UserTreeNode*);
UserTreeNode* delete(UserTreeNode**,int);
void destroy(UserTreeNode**);

#endif //SAPISALES_PROJECT_USER_BST_H
