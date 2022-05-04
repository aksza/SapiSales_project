//
// Created by Aksza on 4/27/2022.
//

#ifndef SAPISALES_PROJECT_USER_LIST_H
#define SAPISALES_PROJECT_USER_LIST_H
#include "user.h"

typedef struct UserNode{
    User* userValue;// this is the value the node stores
    struct UserNode* next;  //this is the node the current node pointes to. this is how the nodes link
}UserNode;

void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode,char* destination);
int findElementInList(UserNode* userNode,int userId);
void insertFirst(UserNode** userNode,User* userValue);
void insertLast(UserNode* userNode,User* userValue);
User* removeFirst(UserNode** userNode);
User* removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);

#endif //SAPISALES_PROJECT_USER_LIST_H
