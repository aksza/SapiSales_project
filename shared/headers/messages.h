//
// Created by Aksza on 2/23/2022.
//

#ifndef SAPISALES_PROJECT_MESSAGES_H
#define SAPISALES_PROJECT_MESSAGES_H
enum LabType{
    LAB2,
    LAB2_3,
    LAB3,
    LAB4,
    LAB5,
    LAB8,
};
enum DeleteType{
    USER,
    PRODUCT,
    USER_ARRAY,
    PRODUCT_ARRAY,
    PRODUCT_STACK,
    USER_QUEUE,
};
void printDescriptionMessage(enum LabType messageType);
void printDeleteMessage(enum DeleteType deleteType);
#endif //SAPISALES_PROJECT_MESSAGES_H
