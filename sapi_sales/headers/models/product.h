//
// Created by Aksza on 2/23/2022.
//

#ifndef SAPISALES_PROJECT_PRODUCT_H
#define SAPISALES_PROJECT_PRODUCT_H

#include <stdlib.h>
#include <sys/utime.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "useful.h"
#include "messages.h"
#include "errors.h"

enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

Product* createProduct(
        char id[10],
        char name[20],
        enum ProductType type,
        unsigned int amount
        );

void printProduct(Product* product);

#endif //SAPISALES_PROJECT_PRODUCT_H
