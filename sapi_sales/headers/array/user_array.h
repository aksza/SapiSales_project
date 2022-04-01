//
// Created by Aksza on 3/9/2022.
//

#ifndef SAPISALES_PROJECT_USER_ARRAY_H
#define SAPISALES_PROJECT_USER_ARRAY_H

#include "user.h"

typedef struct {
    User **Users;
    int Capacity;   //maxUsers
    int numberOfUsers;
}UserArray;
/**
 * Itt foglalunk helyet a UserArray-nek es benne levo tombnek
 * @param userArray amit le kell foglaljunk (cim szerint adjuk at)
 * @param maxUsers maximalis felhasznalok szama
 */
void createUserArray(UserArray **userArray, int maxUsers);
/**Felszabaditunk  mindent
 * @param userArray amit felszabaditunk (cim szerint adjuk at)
 */
void deleteUserArray(UserArray **userArray);
/**
 * Uj felhasznalo beszurasa egy adott poziciora
 * @param userArray ahova beszurunk
 * @param newUser amit beszurunk
 * @param position a pozicio
 * @return ha sikeres a muvelet: true, ha nem: false
 */


///ez a set!!!!
bool addNewUser(UserArray* userArray,User* newUser,int position);
/**
 * egy adott pozicion levo User visszateritese
 * @param userArray a felhasznalok tombjet tartalmazo struktura
 * @param position a pozicio
 * @return az adptt pozicion levo User (ha van), ha nem NULL
 */
 User* getUserAtPosition(UserArray* userArray,int position);
 /**
  * Felhasznalok beolvasasa
  * @param userArray ahova betesszuk a beolvasott felhasznalokat
  * @param from ahonnan olvasunk (fajl vagy console)
  */
void readUsers(UserArray* userArray,char *from);
/**
 * felhasznalok kiiratasa
 * @param userArray
 * @param destination ahova kiirunk
 */
void printUsers(UserArray*userArray,char* destination);

User* getUserAtPosition(UserArray* userArray,int position);

//orai pont
int searchbyid(UserArray *userArray,int id);
#endif //SAPISALES_PROJECT_USER_ARRAY_H
