//
// Created by Aksza on 5/11/2022.
//

#ifndef SAPISALES_PROJECT_PRODUCT_HASH_H
#define SAPISALES_PROJECT_PRODUCT_HASH_H
#include "product_array.h"
#include <stdio.h>
typedef struct Hash{
    Product** table;
    int capacity, elements;
}Hash;
void createHash(Hash**pHash,int capacity);
void insertHash(Hash*hash,Product*product);
void printHashTable(Hash*hash);
int searchHashTable(Hash* hash,int id);
void deleteFromHashTable(Hash* hash,int id);
void freeHashTable(Hash**pHash);
#endif //SAPISALES_PROJECT_PRODUCT_HASH_H
