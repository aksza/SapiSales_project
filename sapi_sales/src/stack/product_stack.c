//
// Created by Aksza on 3/23/2022.
//


#include "../../headers/stack/product_stack.h"

void createProductStack(ProductStack** productStack,unsigned int capacity){
    *productStack = (ProductStack*)malloc(sizeof (ProductStack));
    if(!(*productStack)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*productStack)->products = malloc(capacity * sizeof(Product*));
    if(!(*productStack)->products){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*productStack)->capacity = capacity;
    for(int i = 0; i<(*productStack)->capacity ; ++i){
        (*productStack)->products[i] = NULL;
    }
    (*productStack)->top = -1;
}
void push(ProductStack *productStack, Product *product){
    if(stackIsFull(productStack)){
        printf("Stack is full");
    }
    else{
        productStack->top++;
        productStack->products[productStack->top] = product;
    }
}
void pop(ProductStack *productStack){
    if(stackIsEmpty(productStack)){
        printf("Stack is empty\n");
    }
    else{
        deleteProduct(&productStack->products[productStack->top]);
        productStack->products[productStack->top] = NULL;
        productStack->top--;
    }
}
Product* top(ProductStack *productStack){
    if(stackIsEmpty(productStack)){
        printf("Stack is empty\n");
    }
    else {
        return productStack->products[productStack->top];
    }
    return NULL;
}
bool stackIsEmpty(ProductStack *productStack){
    if(!productStack){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    return productStack->top == -1;
}
bool stackIsFull(ProductStack *productStack){
    if(!productStack){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    return productStack->top == productStack->capacity-1;
}
void deleteProductStack(ProductStack **productStack){
    if((*productStack)){
        for(int i = 0;i < (*productStack)->capacity; ++i){
            deleteProduct(&(*productStack)->products[i]);
        }
        free((*productStack)->products);
        free(*productStack);
        printDeleteMessage(PRODUCT_STACK);
    }
}