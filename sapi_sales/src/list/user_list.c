//
// Created by Aksza on 4/27/2022.
//


//plusz: 1.create, 2.bejaras, 3. betenni elejere,vegere

#include "user_list.h"

void createUserNode(UserNode **userNode, User *userValue) {
    *userNode = (UserNode*) malloc(sizeof(UserNode));
    if(!(*userNode)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userNode)->next = NULL;
    createUser(&(*userNode)->userValue);
    setUserData((*userNode)->userValue,userValue->name,userValue->type,userValue->gender,userValue->spetialization,userValue->birthDate);
}

void printUserList(UserNode *userNode, char *destination) {
    UserNode *p = userNode;
    createUserNode(&p,userNode->userValue);
    setUserData(p,userNode->userValue->name,userNode->userValue->type,userNode->userValue->gender,userNode->userValue->spetialization,userNode->userValue->birthDate);
    while(p != NULL){
        printUser(p->userValue,CON);
        p = p->next;
    }
}

int findElementInList(UserNode *userNode, int userId) {
    return 0;
}

void insertFirst(UserNode **userNode, User *userValue) {

}

void insertLast(UserNode *userNode, User *userValue) {

}

User *removeFirst(UserNode **userNode) {
    return NULL;
}

User *removeLast(UserNode *userNode) {

    return NULL;
}

void deleteUserList(UserNode **userNode) {

}
