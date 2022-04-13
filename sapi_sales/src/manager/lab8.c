//
// Created by Aksza on 4/6/2022.
//


#include "../../headers/queue/user_queue.h"

void testUserQueueFunctionalities() {
    UserQueue* queue;
    createUserQueue(&queue, 4);
    User * user;
    int choice, id;
    while (1) {
        printf("\n\n1. queue\n");
        printf("2. dequeue\n");
        printf("3. print queue\n");
        printf("4. isEmpty operation\n");
        printf("5. isFUll operation\n");
        printf("6. search by Id\n");
        printf("7. Exit\n");
        printf("Enter your choice of operations:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                createUser(&user);
                srand(time(NULL));
                printf("Name:\n");
                scanf("\n%[^\n]",user->name);
                printf("User type:\n");
                scanf("%i",&user->type);
                printf("Gender:\n");
                scanf("%i",&user->gender);
                printf("Spetialization:\n");
                scanf("%i",&user->spetialization);
                printf("Birthdate:\n");
                scanf("%i%i%i",&user->birthDate.year,&user->birthDate.month,&user->birthDate.day);
                printf("ID:\n");
                scanf("%i",&user->id);
                enqueue(queue, user);
                deleteUser(&user);
                break;
            }
            case 2: {
                dequeue(queue);
                break;
            }
            case 3: {
                printQueue(queue, CON);
                break;
            }
            case 4: {
                if(queueIsEmpty(queue)){
                    printf("Queue is empty");
                    break;
                }
                printf("Queue is not empty");
                break;
            }
            case 5: {
                if(queueIsFull(queue)){
                    printf("Queue is full");
                    break;
                }
                printf("Queue is not full");
                break;
            }
            case 6:
                printf("type the id:");
                scanf("%i", &id);
                id=findElementInQueue(queue, id);
                if(id==-1){
                    printf("No user with this id");
                }
                else{
                    printf("%i ", id);
                }
                break;
            case 7: {
                deleteQueue(&queue);
                return;
            }
            default:
                printf("Incorrect choice \n");
                break;
        }
    }
}