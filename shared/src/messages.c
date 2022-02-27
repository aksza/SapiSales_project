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
        case LAB3:
            printf("\n\n**************************************************\n\n");
            printf("Testing User with modified BirthDate and UserArray functionalities");
            printf("\n\n**************************************************\n\n");
            break;
        default:
            printf("Undefined description\n");
            break;
    }
}