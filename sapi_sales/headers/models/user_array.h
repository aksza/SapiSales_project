//
// Created by Aksza on 3/9/2022.
//

#ifndef SAPISALES_PROJECT_USER_ARRAY_H
#define SAPISALES_PROJECT_USER_ARRAY_H

#include "user.h"

typedef struct {
    User **Users;
    int Capacity;
    int numberOfUsers;
}UserArray;

void createUserArray(UserArray *UserArray, int maxUsers);
void deleteUserArray(UserArray **userArray);
bool addNewUser(UserArray* userArray,User* newUser);
void printUsers(UserArray*userArray,int numberOfUsers);
User* getUserAtPosition(UserArray* userArray,int position);

#endif //SAPISALES_PROJECT_USER_ARRAY_H
