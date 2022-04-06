//
// Created by Aksza on 4/6/2022.
//

#ifndef SAPISALES_PROJECT_USER_QUEUE_H
#define SAPISALES_PROJECT_USER_QUEUE_H
#include "user_array.h"
typedef struct {
    int front;  //az elso elem pozicioja
    int rear;   //az elso elem pozicioja
    unsigned int maxsize;
    User **users;
}UserQueue;
void createUserQueue(UserQueue **userQueue,unsigned int maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);
void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue,int userId);
void printQueue(UserQueue* userQueue,char* destination);
void deleteQueue(UserQueue** userQueue);

#endif //SAPISALES_PROJECT_USER_QUEUE_H
