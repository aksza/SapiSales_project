//
// Created by Aksza on 2/23/2022.
//
#include <stdio.h>
#include "../headers/messages.h"

void printDescriptionMessage(enum LabType messageType){
    switch(messageType){
        case LAB2:
            printf("\n\n**************************************************\n\n");
            printf("Testing basic User and Product functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB2_3:
            printf("\n\n**************************************************\n\n");
            printf("Testing basic User and Product functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB3:
            printf("\n\n**************************************************\n\n");
            printf("Testing User with modified BirthDate and UserArray functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB4:
            printf("\n\n**************************************************\n\n");
            printf("Testing UserArray and ProductArray functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB5:
            printf("\n\n**************************************************\n\n");
            printf("Testing ProductStack functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB8:
            printf("\n\n**************************************************\n\n");
            printf("Testing UserQueue functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        case LAB10:
            printf("\n\n**************************************************\n\n");
            printf("Testing UserBST functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        default:

            printf("Undefined description\n");
            break;
    }
}
void printDeleteMessage(enum DeleteType deleteType){
    switch (deleteType) {
        case USER:
            printf("User deleted...\n");
            break;
        case PRODUCT:
            printf("Product deleted...\n");
            break;
        case USER_ARRAY:
            printf("UserArray deleted...\n");
            break;
        case PRODUCT_ARRAY:
            printf("ProductArray deleted...\n");
            break;
        case PRODUCT_STACK:
            printf("ProductStack deleted...\n");
            break;
        case USER_QUEUE:
            printf("User queue deleted...\n");
            break;
        case USER_BST:
            printf("User bst deleted....\n");
        default:
            printf("Undefined description\n");
            break;
    }
}