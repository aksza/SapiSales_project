//
// Created by Aksza on 2/23/2022.
//

#include "../headers/errors.h"
#include <stdio.h>

void printErrorMessage(enum ErrorType errorType){
    switch (errorType) {
        case MEMORY_ALLOCATION:
            printf("Sikertelen tarhelyfoglalas!\n");
            break;
        case FILE_NOT_FOUND:
            printf("Hibas fajlmegnyitas\n");
            break;
        case NULL_POINTER_EXCEPTION:
            printf("Sikertelen tarhelyfoglalas!\n");
            break;
        default:
            break;
    }
}