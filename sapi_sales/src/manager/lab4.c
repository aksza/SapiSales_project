//
// Created by Aksza on 3/23/2022.
//

#include "lab4.h"

void testUserArrayFunctionalities4(){
    ///deklaralunk egy UserArray-t ami tartalmazni fogja az elemeket,
    ///es tudja azt is, hogy mennyi a maximalis felhasznalok szama
    UserArray *userArray;

    ///helyet foglalunk
    createUserArray(&userArray,MAX_USERS);

    ///A FILE_IN_USERS_PRODUCTS fajl a felhasznalokar es a hozzajuk tartozo termekeker is tartalmazza
    ///innen fogjuk beolvasni az adatokat
    readUsers(userArray,FILE_IN_USERS_PRODUCTS);

    ///Kiirjuk a felhasznalok listajar (termekkel egyeutt)
    printUsers(userArray,CON);

    ///Felszabaditjuk a helyet
    deleteUserArray(&userArray);
}