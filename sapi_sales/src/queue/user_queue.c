//
// Created by Aksza on 4/6/2022.
//

#include "../../headers/queue/user_queue.h"

void createUserQueue(UserQueue **userQueue, unsigned int maxSize) {
    *userQueue = (UserQueue*) malloc(sizeof(UserQueue));
    if(!(*userQueue)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userQueue)->users = malloc(maxSize*sizeof(userQueue));
    if(!(*userQueue)->users){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userQueue)->maxsize = maxSize;
    for(int i = 0; i< (*userQueue)->maxsize; ++i){
        (*userQueue)->users[i] = NULL;
    }
    (*userQueue)->front = 0;
    (*userQueue)->rear = 0;

}

bool queueIsEmpty(UserQueue *userQueue) {
    if(userQueue->rear == 0 || userQueue->front==userQueue->rear){
        return true;
    }
    return false;
}
bool queueIsFull(UserQueue *userQueue){
    if(userQueue->rear == userQueue->maxsize){
        return true;
    }
    return false;
}

void enqueue(UserQueue *userQueue, User *user) {
    if(queueIsFull(userQueue)){
        printf("Queue is full!");
    } else{
        userQueue->users[userQueue->rear] = user;
        userQueue->rear++;
    }
}

void dequeue(UserQueue *userQueue) {
    if(queueIsEmpty(userQueue)){
        printf("Queue is empty!");
    } else{
        deleteUser(&userQueue->users[userQueue->front]);
        userQueue->users[userQueue->front] = NULL;
        userQueue->front++;
    }
}

int findElementInQueue(UserQueue *userQueue, int userId) {
    if(queueIsEmpty(userQueue)){
        printf("Queue is empty!");
        return -1;
    } else {
        for (int i = userQueue->front; i < userQueue->rear; ++i) {
            if(userQueue->users[i]->id == userId){
                return i;
            }
        }
    }
}

void printQueue(UserQueue *userQueue, char *destination) {
    if(!queueIsEmpty(userQueue)) {
        for (int i = userQueue->front; i < userQueue->rear; ++i) {
            printUser(userQueue->users[i], CON);
        }
    } else{
        printf("Queue is empty!");
    }
}

void deleteQueue(UserQueue **userQueue) {
    if((*userQueue)){
        for(int i = 0; i < (*userQueue)->maxsize;++i){
            deleteUser(&(*userQueue)->users[i]);
        }
        free((*userQueue)->users);
        free(*userQueue);
        printDeleteMessage(USER_QUEUE);
    }
}
int findElementInQueueByUser(UserQueue* userQueue,User user){
    if(queueIsEmpty(userQueue)){
        printf("Queue is empty!");
        return -1;
    }else {
        for (int i = userQueue->front; i < userQueue->rear; ++i) {
            if(userQueue->users[i]->id == user.id && userQueue->users[i]->birthDate.year == user.birthDate.year && userQueue->users[i]->birthDate.month == userQueue->users[i]->birthDate.day && userQueue->users[i]->spetialization && userQueue->users[i]->gender == user.gender && userQueue->users[i]->type == user.type && strcmp(userQueue->users[i]->name,user.name) == 0){
                return (int)userQueue->users[i]->id;
            }
        }
    }
    return -1;

}


