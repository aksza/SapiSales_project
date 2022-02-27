//
// Created by Aksza on 2/23/2022.
//

#ifndef SAPISALES_PROJECT_ERRORS_H
#define SAPISALES_PROJECT_ERRORS_H
enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};
void printErrorMessage(enum ErrorType errorType);
#endif //SAPISALES_PROJECT_ERRORS_H
