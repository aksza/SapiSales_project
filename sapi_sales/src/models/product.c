//
// Created by Aksza on 2/23/2022.
//

#include "product.h"

char* getProductType(enum ProductType type){
    switch (type) {
        case GROCERY:
            return "Grocery";
        case VEGETABLE:
            return "Vegetable";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }
}
void createProduct(Product** product){
    (*product)= malloc(sizeof(Product));
    if(!(*product)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*product)->id = (int)++numberOfProducts;
}

void setProductData(Product* product,char*name,enum ProductType type,unsigned int amount){
    if(!product){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    strcpy(product->name,name);
    product->type = type;
    product->amount = amount;
    product->creationDate = time(NULL);
}

void printProduct(Product* product,char* destination){
    if(!product){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    freopen(destination,"w",stdout);
    printf("\t%s details:\n"
           "\t\t - ID: %i\n"
           "\t\t - TYPE: %s\n"
           "\t\t - AMOUNT: %u\n"
           "\t\t - CREATION DATE: %lld\n",
           product->name,
           product->id,
           getProductType(product->type),
           product->amount,
           product->creationDate);
    freopen(CON,"w",stdout);
}

void deleteProduct(Product **product) {
    if(*product != NULL){
        free(*product);
        *product = NULL;
        printDeleteMessage(PRODUCT);
    }
}
