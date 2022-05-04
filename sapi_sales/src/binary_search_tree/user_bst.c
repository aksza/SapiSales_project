//
// Created by Aksza on 5/4/2022.
//

#include "../../headers/binary_search_tree/user_bst.h"

void create(UserTreeNode ** userTreeNode) {
    *userTreeNode = (UserTreeNode*)malloc(sizeof (UserTreeNode));
    if(!(*userTreeNode)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userTreeNode)->info = (*userTreeNode)->left = (*userTreeNode)->right = NULL;
    createUser()

}

void insert(UserTreeNode **, User *) {

}

bool search(UserTreeNode *, int) {
    return 0;
}

void inorderPrint(UserTreeNode *, char *) {

}

void preorderPrint(UserTreeNode *, char *) {

}

void postorderPrint(UserTreeNode *, char *) {

}

User *minimum(UserTreeNode *) {
    return NULL;
}

User *maximum(UserTreeNode *) {
    return NULL;
}

UserTreeNode *delete(UserTreeNode **, int) {
    return NULL;
}

void destroy(UserTreeNode **) {

}
