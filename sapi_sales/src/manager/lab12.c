//
// Created by Aksza on 5/11/2022.
//

#include "lab12.h"
void testProductHashTableFunctionalities(){
    Product* product;
    Hash *hash;
    createHash(&hash, 8);
    int choice;
    while (1) {
        printf("\n\n1. Insert product\n");
        printf("2. Delete product\n");
        printf("3. Print products\n");
        printf("4. Search product\n");
        printf("5. Exit\n");
        printf("Enter your choice of operations:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                createProduct(&product);
                srand(time(NULL));
                randProductArray(product);
                insertHash(hash, product);
                deleteProduct(&product);
                break;
            }
            case 2: {
                int id;
                printf("ID:");
                scanf("%i", &id);
                deleteFromHashTable(hash, id);
                break;
            }
            case 3: {
                printHashTable(hash);
                break;
            }
            case 4: {
                int id;
                printf("ID:");
                scanf("%i", &id);
                printf("%i\n",searchHashTable(hash, id));
                break;
            }
            case 5: {
                freeHashTable(&hash);
                return;
            }
            default:
                printf("Incorrect choice \n");
                break;
        }
    }
}
