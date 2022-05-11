//
// Created by Aksza on 3/23/2022.
//

#ifndef SAPISALES_PROJECT_PRODUCT_ARRAY_H
#define SAPISALES_PROJECT_PRODUCT_ARRAY_H

#include "product.h"

typedef struct {
    Product **products;
    unsigned int maxProducts;
    int numOfProducts;
}ProductArray;

/**
 * Termekek tombjet tartalmazo struktura letrehozasa, termekek tombjenek letrehozasa
 * @param productArray maga a termekek tombjet tartalmazo struktura
 * @param maxProducts maximalis termekek szama
 */
void createProductArray(ProductArray **productArray, unsigned int maxProducts);

/**
 * Termekek tombjenek felszabaditasa
 * @param productArray maga a termekek tombjet tartalmazo struktura
 */
 void deleteProductArray(ProductArray **productArray);
 /**
  * Uj termek hozzaadasa a tombhoz
  * @param productArray termekek tombjet taralmazo struktura
  * @param newProduct uj termek
  * @param position adott pozicio
  * @return sikeres hozzaadas eseten : true, egyebkentL false
  */
  bool addNewProduct(ProductArray* productArray, Product *newProduct,int position);

  /**
   * Adott id-val rendelkezo termek visszaadasa
   * @param productArray
   * @param productId adott id
   * @return a termek, vagy NULL
   */
   int findElementInArray(ProductArray* productArray,int productId);
   /**
    * Adott pozicion levo termek visszaadasa
    * @param productArray
    * @param position adott pozocio
    * @return a termek vagy NULL
    */
    Product *getProductAtPosition(ProductArray* productArray,int position);

    void randProductArray(Product* product);
#endif //SAPISALES_PROJECT_PRODUCT_ARRAY_H
