//
// Created by Aksza on 3/23/2022.
//

#ifndef SAPISALES_PROJECT_PRODUCT_STACK_H
#define SAPISALES_PROJECT_PRODUCT_STACK_H
#include "product.h"
typedef struct{
    unsigned int capacity;
    int top;
    Product** products;
}ProductStack;
/**
 * Verem letrehozasa, helyfoglalas, a kapacitas adott
 * @param ProductStack - ennek foglalunk helyet
 * @param capacity - amit beszurunk
 */
void createProductStack(ProductStack** ProductStack,unsigned int capacity);
/**
 * Uj elem beszurasa a verembe
 * @param productStack - ahova beszurunk
 * @param product - amit beszurunk
 */
void push(ProductStack *productStack,Product *product);
/**
 * Elem kivetele a verembol
 * @param productStack - ahonnan kiveszunk elemet
 */
void pop(ProductStack *productStack);
/**
 * Legfelso elem lekerdezese (verem tetejen levo elem)
 * @param productStack - maga a verem
 * @return a legfelso elem, ha a verem ures, akkor NULL
 */
Product* top(ProductStack *productStack);
/**
 * Verem uressegenek ellenorzese
 * @param productStack - maga a verem
 * @return igay - ha ures, hamis - ha nem ures
 */
 bool stackIsEmpty(ProductStack *productStack);
/**
 * Verem telisegenek ellenorzese
 * @param productStack - maga a verem
 * @return igaz - ha tele van, hamis - ha nincs tele
 */
 bool stackIsFull(ProductStack *productStack);
/**
 * Verem felszabaditasa
 * @param productStack - amit fel kell szabaditani
 */
 void deleteProductStack(ProductStack **productStack);

#endif //SAPISALES_PROJECT_PRODUCT_STACK_H
