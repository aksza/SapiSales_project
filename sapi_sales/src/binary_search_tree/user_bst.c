////
//// Created by Aksza on 5/4/2022.
////
//
//#include "../../headers/binary_search_tree/user_bst.h"
//
//void create(UserTreeNode ** userTreeNode) {
//    *userTreeNode = (UserTreeNode*)malloc(sizeof (UserTreeNode));
//    if(!(*userTreeNode)){
//        printErrorMessage(MEMORY_ALLOCATION);
//    }
//    createUser(&(*userTreeNode)->info);
//
//}
//
//void insert(UserTreeNode **userTreeNode, User *user) {
//    if(*userTreeNode == NULL){
//        create(&(*userTreeNode));
//        (*userTreeNode)->left = (*userTreeNode)->right = NULL;
//        setUserData((*userTreeNode)->info, user->name, user->type, user->gender, user->spetialization, user->birthDate);
//    }
//    else if((*userTreeNode)->info->id > user->id){
//        insert(&(*userTreeNode)->left, user);
//    }
//    else if((*userTreeNode)->info->id < user->id){
//        insert(&(*userTreeNode)->right, user);
//    }
//}
//
//bool search(UserTreeNode *userTreeNode, int id) {
//    if(userTreeNode == NULL){
//        return false;
//    }
//    else if(id < userTreeNode->info->id){
//        search(userTreeNode->left,id);
//    }
//    else if(id > userTreeNode->info->id){
//        search(userTreeNode->right,id);
//    } else{
//        return true;
//    }
//}
//
//void inorderPrint(UserTreeNode *, char *) {
//
//}
//
//void preorderPrint(UserTreeNode *, char *) {
//
//}
//
//void postorderPrint(UserTreeNode *, char *) {
//
//}
//
//User *minimum(UserTreeNode *) {
//    return NULL;
//}
//
//User *maximum(UserTreeNode *) {
//    return NULL;
//}
//
//UserTreeNode *delete(UserTreeNode **, int) {
//    return NULL;
//}
//
//void destroy(UserTreeNode **) {
//
//}
