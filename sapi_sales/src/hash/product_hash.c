//
// Created by Aksza on 5/11/2022.
//

#include "../../headers/hash/product_hash.h"

void createHash(Hash **pHash, int capacity) {
    (*pHash) = (Hash*) malloc(sizeof(Hash));
    if(*pHash == NULL){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*pHash)->table = malloc(capacity * sizeof (Product));//?
    if((*pHash)->table == NULL){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*pHash)->capacity = capacity;
    for(int i = 0; i < (*pHash)->capacity; ++i){
        createProduct(&(*pHash)->table[i]);
        (*pHash)->table[i]->id = -1;
    }
    (*pHash)->elements = 0;
}

void insertHash(Hash *hash, Product *product) {
    int j,i = 0;
    do{
        j = (product->id + i) % hash->capacity;
        if(hash->table[j]->id == -1){
            setProductData(hash->table[j],product->name,product->type, product->amount);
            hash->table[j]->id = product->id;
            hash->elements++;
            return;
        } else ++i;
    }while (i != hash->capacity);
    printf("tulcsordulas");
}

void printHashTable(Hash *hash) {
    for (int i = 0; i < hash->capacity; ++i) {
        if(hash->table[i]->id != -1){
            printProduct(hash->table[i],CON);
        }
    }
}

int searchHashTable(Hash *hash, int id) {
    int i = 0, j;
    do{
        j =(id + i)% hash->capacity;
        if(hash->table[j]->id == id){
            return j;   //visszaadja a megtalalt elem indexet
        }
        else i++;
    } while ((hash->table[j]->id != -1) && (i != id));
    return -1;  //ha nincs benne a keresett elem
}

void deleteFromHashTable(Hash *hash, int id) {
    if(hash->elements != 0){
        for (int i = 0; i < hash->capacity; ++i) {
            if(hash->table[i]->id == id){
                hash->elements--;
                hash->table[i]->id = -1;
                return;
            }
        }
    }
}

void freeHashTable(Hash **pHash) {
    for (int i = 0; i < (*pHash)->capacity; ++i) {
        free((*pHash)->table[i]);
    }
    free((*pHash)->table);
    free(*pHash);
}
