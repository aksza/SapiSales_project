//
// Created by Aksza on 3/23/2022.
//

#include "../../headers/array/product_array.h"

void createProductArray(ProductArray **productArray,unsigned int maxProducts){
    *productArray = malloc(sizeof(ProductArray));
    if(!(*productArray)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*productArray)->maxProducts = maxProducts;
    (*productArray)->products = malloc(maxProducts*(sizeof (Product)));
    if(!(*productArray)->products){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    ///kezdetben minden termeket NULLra allitunk
    for(int i= 0;i < (*productArray)->maxProducts;++i){
        (*productArray)->products[i] = NULL;
    }
}
void deleteProductArray(ProductArray **productArray){
    if(*productArray != NULL){
        for(int i = 0; i < (*productArray)->maxProducts;++i){
            ///Eloszor felszabaditunk minden termeket
            deleteProduct(&(*productArray)->products[i]);
        }
        (*productArray)->maxProducts = 0;
        ///Utana magat a tombot
        free((*productArray)->products);
        ///es vegul a strukturat
        free((*productArray));
        *productArray = NULL;
        printDeleteMessage(PRODUCT_ARRAY);
    }
}
bool addNewProduct(ProductArray* productArray, Product *newProduct,int position){
    if(!productArray || !newProduct || position < 0 ||position >= productArray->maxProducts){
        printf("Incorrect position or array is NULL");
        return false;
    }
    productArray->products[position] = newProduct;
    productArray->numOfProducts++;
    return true;
}
Product *getProductAtPosition(ProductArray *productArray,int position){
    if(!productArray || position<0 || position>=productArray->maxProducts){
        printf("Incorrect position or array is NULL");
        return NULL;
    }
    return productArray->products[position];
}
int findElementInArray(ProductArray *productArray,int productId){
    for(int i = 0;i < productArray->maxProducts;++i){
        if(productArray->products[i]->id == productId){
            return i;
        }
    }
    return -1;
}